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

	r = _abs(-1);
	printf("%d\n", r);
	r = _abs(0);
	printf("%d\n", r);
	r = _abs(1);
	printf("%d\n", r);
	r = _abs(-98);
	printf("%d\n", r);
	return (0);
}
