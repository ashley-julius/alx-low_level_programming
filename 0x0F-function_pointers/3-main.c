/* This program is also known as our test program */
#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - Controls start here
 * @argc: size of command line parameters
 * @argv: pointer to pointer to commandline arguments
 * Return: zero
 */

int main(int argc, char *argv[])
{
	int (*fun_ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	fun_ptr = get_op_func(argv[2]);
	if (fun_ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", fun_ptr(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
