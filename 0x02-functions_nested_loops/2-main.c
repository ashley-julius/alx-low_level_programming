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

	r = _isalpha('H');
	_putchar(r + '0');
	r = _isalpha('o');
	_putchar(r + '0');
	r = _isalpha(108);
	_putchar(r + '0');
	r = _isalpha(';');
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
