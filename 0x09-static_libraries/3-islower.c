/* This program checks for lowercase character */
#include <unistd.h>
#include "main.h"
#include <ctype.h>


/**
 * _islower- checks if it is lowercase
 * and return 1 or 0
 * @c: accepts an int
 * Return: 1 or 0
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
	_putchar('\n');
}

