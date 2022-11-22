/* This program shows how to allocate memory on the heap using malloc */
#include "main.h"
/**
 * malloc_checked - This function creates a space on the heap using malloc
 *
 * @b: unsigned int, the amount of bytes to be allocated on the heap
 *
 * Return: a void pointer or an exit status of 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (!ptr)
		exit(98);
	return (ptr);
}
