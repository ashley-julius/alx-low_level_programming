/*
 * This function prints the alhabet in
 * lowercase, followed by a new line
 */
#include "main.h"
#include <ctype.h>
#include <stdio.h>
/**
 * print_alphabet- This display letters in lowercase
 * @void: means it takes no argument
 * Return: zero
 */
char print_alphabet(void)
{
	/*
	 *  Declare our loop counter
	 *  and our placeholder
	 */
	char ch;
	char lower_case;
	int i = 0;

	for (i = 10; i >= 1; i++)
	{
		for (ch = 'A'; ch <= 'Z'; ch++)

		{
			lower_case = tolower(ch);
			putchar(lower_case);

		}
		putchar('\n');
	}
	return (0);
}
