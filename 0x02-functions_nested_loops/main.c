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
	/*
	 * invoking the print_alphabet function
	 */

	print_to_98(0);
	print_to_98(98);
	print_to_98(111);
	print_to_98(81);
	print_to_98(-10);
	return (0);
}
