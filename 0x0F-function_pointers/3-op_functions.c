/* This function works as a calculator */
#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * op_add - This function adds two integers
 * @a: ordinary int
 * @b: ordinary int
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return(a + b);
}
/**
 * op_sub - This function subtracts two integers
 * @a: ordinary int
 * @b: ordinary int
 * Return: the difference of a and b
 */
int op_sub(int a, int b)
{
	return(a - b);
}

/**
 * op_mul - This function multiplies two integers
 * @a: ordinary int
 * @b: ordinary int
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return(a * b);
}

/**
 * op_div - This function finds the remainder of two integers
 * @a: ordinary integer
 * @b: ordinary interger
 * Return: the quotient of two numbers
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return(a / b);
}

/**
 * op_mod - This function returns the quotient of two integers
 * @a: ordinary integer
 * @b: ordinary integer
 * Return: the remainder of the two integers when divided
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return(a % b);
}














