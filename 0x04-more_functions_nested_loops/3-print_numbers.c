/* This program prints from 1 to 9 */
#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * print_numbers- This function prints
 * the digit from 1 to 9
 * @void: means it takes no argument
 * Return: void
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
		_putchar(i + '0');
	_putchar('\n');
}
