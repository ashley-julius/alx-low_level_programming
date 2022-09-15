/* This program is just for testing our function */
#include <stdio.h>
#include "main.h"
#include <ctype.h>
#include <stdlib.h>
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
	print_last_digit(98);
	print_last_digit(0);
	r = print_last_digit(-1024);
	_putchar('0' + r);
	_putchar('\n');
	return (0);
}
