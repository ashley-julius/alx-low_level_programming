/*
 * This program prints a string
 * and a newline
 */
#include "main.h"
/**
 * _puts - print a bunch of string
 * @str: pointer to char
 */
void _puts(char *str)
{
	/*
	 * Declare counter loop
	 */
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
