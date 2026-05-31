#include "lr1.h"
#include <stdio.h>
int pow(float n) {
	float res = n * n;
	return res;
}
void lab1_main(void) {
	float R;
	float A;
	float S;
	float S_r;
	float S_a;
	printf("R = ");
	scanf_s("%f", &R);
	printf("A = ");
	scanf_s("%f", &A);
	S_r = PI * pow(R);
	printf("%f\n", S_r);
	S_a = pow(A);
	printf("%f\n", S_a);
	S = S_r - S_a;
	printf("area = %f\n", S);
}