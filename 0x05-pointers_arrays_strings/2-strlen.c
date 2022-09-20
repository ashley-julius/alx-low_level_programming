/* This function returns the length of a string */
#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: pointer to a char
 *Return: the lenght
 */
int _strlen(char *s)
{
	int len;

	len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
