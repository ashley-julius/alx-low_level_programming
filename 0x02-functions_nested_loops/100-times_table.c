#include "main.h"
/**
 * print_times_table - prints the n times table
 * @n: any time table less than 15
 * Return: return nothing
 */
void print_times_table(int n)
{
	int i;
	int j;
	int prod;
	int first;
	int second;
	int third;
	
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			prod = i * j;
			if (prod > 9 && prod < 100)
			{
				first = prod / 10;
				second = prod % 10;
				_putchar(first + '0');
				_putchar(second + '0');
			if (prod > 99)
			second = prod % 10;
			t
			_putchar(prod + '0');
			if (j < n)
