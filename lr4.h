#pragma once
#include <stdio.h>
#define YES 1
#define NO 0
#define MAXLINE 1000
void process_line(char buffer[], FILE *outfile);
int is_palindrome(char word[], int start, int end);
void lab4_main(void);