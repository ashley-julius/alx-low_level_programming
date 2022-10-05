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
	char *t;

	t = malloc(size);
	if (size == 0)
	{
		t = NULL;
		return (t);
	}
	t[0] = c;
	_putchar('\n');
	return (t);
}
