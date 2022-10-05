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
	unsigned int i;

	if (size == 0)
	{
		t = NULL;
		return (t);
	}
	t = malloc(size);
	if (t == NULL)
		return (t);
	for (i = 0; i < size; i++)
		t[i] = c;
	_putchar('\n');
	return (t);
}
