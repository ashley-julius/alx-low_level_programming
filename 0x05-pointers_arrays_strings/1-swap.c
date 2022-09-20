/* This program swap the values of two integers */

#include "main.h"
/**
 * swap_int - Swaps the value of two ints
 * @a: pointer to an int
 * @b: pointer to another int
 */
void swap_int(int *a, int *b)
{
	int val_a;
	int val_b;

	val_b = *b;
	val_a = *a;
	*a = val_b;
	*b = val_a;
}
