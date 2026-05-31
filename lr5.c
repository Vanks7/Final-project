#include <stdio.h>
#include "lr5.h"
#define n 10

float abs5(float m)
{
	if (m > 0)
	{
		return m;
	}
	else
	{
		return -m;
	}
}

void sort(float massive[], int size)
{
	for (int i = 1; i < size; i++)
	{
		float key = massive[i];
		float key_abs = abs5(key);
		int j = i - 1;
		while (j > 0 && abs(massive[j]) > key_abs)
		{
			massive[j + 1] = massive[j];
			j--;
		}
		massive[j + 1] = key;
	}
}

void lab5_main(void)
{
	float massive[n];
	float max;
	int i;
	for (i = 0; i < n; i++)
		scanf_s("%f", &massive[i]);
	max = massive[0];
	for (i = 1; i < n; i++)
		if (massive[i] > max)
		{
			max = massive[i];
		}
	for (i = 0;i < n;i++)
		if (massive[i] < 0)
		{
			massive[i] = massive[i] / max;
		}
	sort(massive, n);
	for (i = 0; i < n; i++)
		printf("%f ", massive[i]);
	printf("\n");
}