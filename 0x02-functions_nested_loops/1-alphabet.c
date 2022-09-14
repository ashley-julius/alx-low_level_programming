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
void print_alphabet(void)
{
	/*
	 *  Declare our loop counter
	 *  and our placeholder
	 */
	char ch;
	char lower_case;

	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		lower_case = tolower(ch);
		_putchar(lower_case);
	}
	_putchar('\n');
	return;
}
