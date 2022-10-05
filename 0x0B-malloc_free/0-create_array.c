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

	if (size == 0)
	{
		t = NULL;
	}
	else
	{
		t = malloc(size);
		t[0] = c;
	}
	return (t);
}
