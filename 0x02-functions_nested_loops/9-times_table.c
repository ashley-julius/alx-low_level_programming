/* This program prints the nine times table */
#include <stdio.h>
/**
 * times_table - this is about print times table
 * @void: means no argument
 * Return: void
 */

void times_table(void)
{
	int i, j, k, add, first, last, count;

	for (j = 0; j < 10; j++)
	{
		putchar('0');
		if (j < 9)
		{
			putchar(',');
			putchar(' ');
			putchar(' ');
		}
	}
	putchar('\n');
	add = 1;
	for (i = 0; i <= 8; i++)
	{
		for (k = 0; k <= 9; k++)
		{
			count = add * k;
			if (count > 9)
			{
				first = count / 10;
				last = count % 10;
				putchar(first + '0');
				putchar(last + '0');
			}
			else
				putchar(count + '0');
			if (k < 9)
			{
				putchar(',');
				putchar(' ');
				putchar(' ');
			}
		}
		putchar('\n');
		add++;
	}
}
