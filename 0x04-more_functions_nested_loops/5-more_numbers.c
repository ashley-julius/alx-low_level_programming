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
	int i, j, x;

	for (i = 0; i < 10; i++)
	{
		for (x = 0; x < 10; x++)
		{
			_putchar(x + '0');
			if (x == 9)
			{
				for (j = 0; j < 5; j++)
				{
					_putchar('1');
					_putchar(j + '0');
				}
			}


		}
		_putchar('\n');
	}
}
