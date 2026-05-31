#include <stdio.h>
#include <stdlib.h>
#include "lr1.h"
#include "lr2.h"
#include "lr3.h"
#include "lr4.h"
#include "lr5.h"
#include "lr6.h"

void print_menu()
{
	printf("\n--- Main Menu ---");
	printf("1. Lab1\n");
	printf("2. Lab2\n");
	printf("3. Lab3\n");
	printf("4. Lab4\n");
	printf("5. Lab5\n");
	printf("6. Lab6\n");
	printf("0. Exit\n");
	printf("Your choice: ");
}
int main()
{
	int choice = 0;
	int running = 1;
	while (running)
	{
		print_menu();
		if (scanf_s("%d, &choice") != 1)
		{
			printf("Error\n");
			while (getchar() != '\n');
			continue;
		}
		switch (choice)
		{
			case 1: {
				printf("\n --- Task 1 ---\n");
				lab1_main();
				break;
			}
			case 2:
			{
				printf("\n --- Task 2 ---\n");
				lab2_main();
				break;
			}
			case 3:
			{
				printf("\n --- Task 3 ---\n");
				lab3_main();
				break;
			}
			case 4:
			{
				printf("\n --- Task 4 ---\n");
				lab4_main();
				break;
			}
			case 5:
			{
				printf("\n --- Task 5 ---\n");
				lab5_main();
				break;
			}
			case 6:
			{
				printf("\n --- Task 6 ---\n");
				lab6_main();
				break;
			}
			case 0:
			{
				printf("Exit");
				running = 0;
				break;
			}
			default:
			{
				printf("Wrong choice\n");
				break;
			}
		}
	}
	return 0;
}