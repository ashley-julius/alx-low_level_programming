/* This program prints the last digit */
#include "main.h"
#include <stdio.h>
/**
 * print_last_digit- calculates the
 * last digit
 * @x: parameter of type int
 *Return: the last digit
 */
int print_last_digit(int x)
{
	int n;

	if (x < 0)
		x = x * -1;
	n = (x % 10);
	_putchar(n + '0');
	return (n);

}
