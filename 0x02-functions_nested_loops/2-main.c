/* This program is just for testing our function */
#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * main- Entry point
 * @void- means our main function has no argument
 * Return: zero
 */
int main(void)
{
	int r;

	/*
	 * invoking the print_alphabet function
	 */

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
