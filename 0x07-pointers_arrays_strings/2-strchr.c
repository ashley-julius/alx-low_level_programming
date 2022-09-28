/* This program returns a character in a string */
#include <stdio.h>
#include "main.h"
/**
 * _strchr - this function finds a string and
 * returns it
 * @s: pointer to a char
 * @c: ordinary char
 * Return: (s + i) or NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
			return((s + i));
		i++;
	}

	return ((s + i));
}
