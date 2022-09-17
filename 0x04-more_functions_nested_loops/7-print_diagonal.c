/*
 * This program draws a straight
 * to the screen
 */
#include "main.h"
/**
 * print_diagonal- prints a diagonal to
 * the screen
 * @n: parameter of type int
 * Return: void
 */
void print_diagonal(int n)
{
	if (n == 0 && n < 0)
	{
		_putchar('\n');
	}
	else
	{
		while (n > 0)
		{
			_putchar('/');
			n--;
		}
	}
	_putchar('\n');
}
