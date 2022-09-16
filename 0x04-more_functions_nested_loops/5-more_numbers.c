/*
 * This function prints the digits
 * from 0 to 14, 10 times
 */
#include "main.h"
#include <ctype.h>
#include <stdio.h>
#include <unistd.h>
/**
 * more_numbers- This display the digits
 * from 0 to 14
 * @void: means it takes no argument
 * Return: void
 */
void more_numbers(void)
{
	/*
	* Declare our local variables
	*/
	int ch;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (ch = 0; ch <= 14; ch++)
		{
			write(1, ch, 10);
		}
		_putchar('\n');
	}
}
