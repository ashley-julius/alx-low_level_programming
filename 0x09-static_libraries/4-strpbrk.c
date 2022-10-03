#include "main.h"

/**
 ** _strcat - concatenate src to dest
 ** @dest: pointer to char
 ** @src: pointer to char
 ** Return: dest
 */

char *_strcat(char *dest, char *src)
{
	/*
	 ** Declaration of local variables
	 */
	int i, j;

	i = j = 0;
	while (*(dest + i))
	i++;

	while ((*(dest + i) = *(src + j)))
	{
		i++;
		j++;
	}
	return (dest);
}
