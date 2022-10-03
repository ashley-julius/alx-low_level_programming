#include "main.h"

/**
 ** _strstr - receives two pointer variable
 ** @haystack: pointer to char
 ** @needle: pointer to char
 ** Return: needle
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		_putchar(*haystack);
		haystack++;
	}
	while (*needle != '\0')
	{
		_putchar(*needle);
		needle++;
	}
	return (haystack);
	_putchar('\n');
}
