/*
 ** This function prints an int without
 ** using array and int
 */
#include "main.h"
/**
 * print_number - This function prints an int
 * using _putchar and recursion
 * @n: parameter of an int
 */

void print_number(int n)
{
	/*
	 * check if n is zero & print zero
	 */
	if (n == 0)
		_putchar(n + '0');
	/*
	 * check if n is negative and use
	 * hyphen as the minus
	 */
	else if (n < 0)
	{
		_putchar('-');
		n = -n;
		if (n / 10)
			print_number(n / 10);
		_putchar(n % 10 + '0');
	}
	else
	{
		/*
		 * use recursion and prints
		 * the last digit
		 */
		if (n / 10)
			print_number(n / 10);
		_putchar(n % 10 + '0');
	}
}
