/* This program that prints the opcodes of its own main function. */
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: zero
 */
int main(int argc, char *argv[])
{
	char *opc = (char *)main;
	int i, no;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	no = atoi(argv[1]);
	if (no < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < no; i++)
	{
		printf("%02x", opc[i] & 0xFF);
		if (i != no - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
