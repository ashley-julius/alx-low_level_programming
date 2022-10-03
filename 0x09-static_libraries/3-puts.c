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
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
