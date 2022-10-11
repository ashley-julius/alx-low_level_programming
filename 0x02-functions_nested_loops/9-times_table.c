/* This program prints the nine times table */
#include <stdio.h>
#include "main.h"
/**
 * times_table - this is about print times table
 * @void: means no argument
 */
void times_table(void)
{
	int i, k, first, last, count;

	for (i = 0; i <= 9; i++)
	{
		for (k = 0; k <= 9; k++)
		{
			count = i * k;
			if (count > 9)
			{
				first = count / 10;
				last = count % 10;
				_putchar(first + '0');
				_putchar(last + '0');
			}
			if (count <= 9)
			{
				_putchar(count + '0');
			}
			if (k < 9)
			{
				_putchar(',');
				_putchar(' ');
				if (((k + 1) * i) < 10)
					_putchar(' ');

			}
		}
		_putchar('\n');
	}
}
