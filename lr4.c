#include "lr4.h"
#include <stdio.h>
#define YES 1
#define NO 0
#define MAXLINE 1000

void process_line(char buffer[], FILE* outfile); 
int is_palindrome(char word[], int start, int end)
{
	while (start < end)
	{
		if (word[start] != word[end])
			return NO;
		start++;
		end--;
	}
	return YES;
}
void lab4_main(void)
{
	char line[MAXLINE];
	FILE* file = fopen("deleted.txt", "a");
	if (file == NULL)
	{
		printf("Error\n");
		return 1;
	}
	gets(line);
	process_line(line, file);
	puts(line);
	fclose(file);
	return 0;
}
void process_line(char buffer[], FILE* outfile)
{
	char c;
	int i = 0;
	int found = NO;
	int slovo = NO;
	int start = 0;
	int pos = 0;
	do
	{
		c = buffer[i];
		if (c == ' ' || c == '.' || c == ',' || c == '\n' || c == '\0')
		{
			if (slovo == YES)
			{
				if (is_palindrome(buffer, start, i - 1))
				{
					found = YES;
					fprintf(outfile, "%.*s\n", i - start, buffer + start);
				}
				else
					found = NO;
				if (found == NO)
				{
					for (int j = start; j < i; j++)
						buffer[pos++] = buffer[j];
				}
			}
			slovo = NO;
			buffer[pos++] = c;
		}
		else
		{
			if (slovo == NO)
			{
				slovo = YES;
				start = i;
			}
		}
		i++;
	} while (c != '\0');
}