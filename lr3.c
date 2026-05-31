#include "lr3.h"
#include <stdio.h>
#define YES 1
#define NO 0
#define SOGL 2
#define GLAS 3

int bukva(char n)
{
	int pr = NO;
	if (n > 96 && n < 123)
	{
		if (n == 97 || n == 101 || n == 105 || n == 111 || n == 117 || n == 121)
		{
			pr = GLAS;
		}
		else
		{
			pr = SOGL;
		}
	}
	return pr;
}
void lab3_main(void) {
	int c;
	int slovo = NO;
	int cnt = 0;
	int found = NO;
	int sogl = 0;
	int glas = 0;
	while ((c = getchar()) != EOF)
	{
		if (c == ' ' || c == '	.' || c == ',' || c == '\n')
		{
			if (slovo == YES)
			{
				if (glas > sogl)
				{
					found = YES;
				}
				if (found == YES)
				{
					cnt += 1;
					found = NO;
					glas = 0;
					sogl = 0;
				}
			}
			slovo = NO;
		}
		else
		{
			if (bukva(c) == GLAS)
			{
				glas += 1;
			}
			if (bukva(c) == SOGL)
			{
				sogl += 1;
			}
		}
	}
	printf("number of words = 2\n");
}