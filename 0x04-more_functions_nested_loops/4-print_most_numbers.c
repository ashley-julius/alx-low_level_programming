/*
 * This program prints from 0 to 9
 * except 2 and 4
 */
#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers- This function prints
 * from 0 to 9 except 2 and 4
 * @void: means parameter is the keyword void
 * Return: void
 */
void print_most_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		if (i != 2 && i != 4)
			_putchar(i + '0');
		i++;
	}
	_putchar('\n');

}
