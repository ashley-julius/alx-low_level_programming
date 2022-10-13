/* This program selects the correct function and perform the operations */
#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 *get_op_func - This function selects and performs operation on int
 *@s: pointer to a function
 *Return: an integer
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i;

	i = 0;
	while (i < 5)
	{
		if (ops->op[i] == *s)
			break;
		i++;
	}
	return (ops[i / 2].f);
}
