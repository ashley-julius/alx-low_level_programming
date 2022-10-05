/* This program gives an understanding of using malloc and free */
#include "main.h"
#include <stdlib.h>
/**
 * create_array - This function allocates memory using malloc
 *@size: ordinary unsigned int
 *@c: ordinary character
 *Return: address
 */
char *create_array(unsigned int size, char c)
{
	char *t, *k;
	
	if (size == 0)
	{
		t = NULL;
	}
	t = malloc(size);
	if (t == NULL)
	{
		k = NULL;
		return (k);
	}
	t[0] = c;
	return (t);
	_putchar('\n');
}
