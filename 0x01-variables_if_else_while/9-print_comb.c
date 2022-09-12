/*
 * This program prints all combinations of base
 * ten numbers
 */
#include <stdio.h>
/**
 * main - Entry point
 * @void- means main 'funct' has no  arguments
 * Return: zero
 */
int main(void)
{
	/*
	 * Declare our loop variable
	 */
	char ch;

	/*
	 * Loop
	 */
	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
		if (ch <= '8')
		{
			putchar(',');
			putchar(' ');
		}
		else if (ch == '9')
		{
			putchar('$');
		}
	}
	return (0);
}
