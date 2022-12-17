#include "main.h"

/**
 ** _strpbrk - receives two addresses
 ** @s: pointer to char
 ** @accept: pointer to char
 ** Return: an address
 */

char *_strpbrk(char *s, char *accept)
{

	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	while(*accept != '\0')
	{
		_putchar(*accept);
		accept++;
	}
	return (s);
	_putchar('\n');
}
