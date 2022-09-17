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
	int i, k;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i--)
		{
			for (k = 0; k < i; k++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
