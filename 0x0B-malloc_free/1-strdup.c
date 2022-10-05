/* This program allocate memory to copy a string and returns a pointer */
#include "main.h"
#include <stdlib.h>
/**
 *_strdup - This function allocates and copy string to memory
 *@str: pointer to a char
 * Return: a pointer to a char
 */
char *_strdup(char *str)
{
	char *s;
	int i, k;

	if (str == NULL)
		return (str);
	i = 0;
	while (str[i] != '\0')
		i++;

	s = malloc(i - 1);
	if (s == NULL)
		return (s);
	for (k = 0; k <= i - 1; k++)
		s[k] = str[k];
	return (s);
}

