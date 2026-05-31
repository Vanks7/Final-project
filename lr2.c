#include "lr2.h"
#include <stdio.h>
unsigned long long factorial(int n) {
	unsigned long long res = 1;
	for (int i = 1; i <= n; ++i) {
		res *= i;
	}
	return res;
}
double fabs(float n) {
	if (n < 0) {
		return -n;
	}
	return n;
}
float pow2(float n, int k) {
	float res = 1.0;
	if (k == 0) {
		return 1.0;
	}
	for (int i = 0; i < k; i++) {
		res *= n;
	}
	return res;
}
double deepseek(double eps, double x) {
	double s = 0.0;
	double a = x;
	int k = 0;
	while (fabs(a) > eps) {
		s += a;
		a *= -x * x / ((2.0 * k + 2.0) * (2.0 * k + 3));
		k++;
	}
	return s;
}
double resh(double eps, double x)
{
	double s = 0.0;
	int sign = 1;
	double b = 1.0;
	double c = x;
	double fact = 1.0;
	double a = c / b;
	int i = 0;
	while (i != 3) {
		printf("% lf", a);
		s += a * sign;
		sign *= -1;
		c = c * x * x;
		printf("\n%lf\n", c);
		fact = b * (b + 1) * (b + 2);
		printf("\n%lf\n", fact);
		b += 2;
		a = c / fact;
		i++;
	}
	printf("\nn = %d, s = %lf\n", i, s);
	return s;
}
void lab2_main(void)
{
	double s, a, c, b, x, eps, fact;
	int k, i, sign;
	printf("eps = ");
	scanf_s("%lf", &eps);
	printf("x = ");
	scanf_s("%lf", &x);
	s = 0.0;
	sign = 1;
	i = 0;
	c = x;
	b = 1.0;
	a = c / b;
	k = 1;
	fact = 1.0;
	resh(eps, x);
	while (fabs(a) > eps) {
		s = s + a * sign;
		sign = -sign;
		b += 2.0;
		k += 2;
		c = pow2(x, k);
		a = c / factorial(b);
		i += 1;
		printf("%lf ", s);
	}
	printf("\nn = %d, s = %lf\n", i, s);
}