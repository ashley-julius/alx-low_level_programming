/*
 * This function that prints n elements of an array
 *  of integers, followed by a new line.
 */
#include "main.h"
#include <stdio.h>
/**
 ** print_array - prints n elements of an array
 **@a: pointer to an int
 **@n: ordinary int
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
		if ((n - i) == 1)
			printf("%i", *(a + i));
		else
			printf("%i, ", *(a + i));
	printf("\n");
}

