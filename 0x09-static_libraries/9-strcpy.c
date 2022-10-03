/* 
 * This program copy a string from one 
 * array to an other
 */
#include "main.h"
/**
 *_strcpy - copy one string to another
 *@dest: pointer to char
 *@src: pointer to char
 *Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, k;

	i = k = 0;
	while (dest[i] != '\0')
		i++;

	while (src[k] != '\0')
	       k++;
	_putchar(i + '0');
	_putchar(k + '0');
	return (dest);
	_putchar('\n');
}	
