/* This program copys a string into a buffer */
#include "main.h"
/**
 * _strcpy - This function copys a string to a buffer
 * @dest: pointer to char
 * @src: pointer to char
 *
 * Return: a pointer to a char
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (*src != '\0')
	{
		dest[i] = *src;
		src++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
