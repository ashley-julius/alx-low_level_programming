/*
 * This program serves as a begginner's guide to command
 * line arguments:
 *	argument count (argc)
 *	argument vector (argv)
 */
#include <stdio.h>
/**
 * main - Entry points
 * @argc: argument count
 * @argv: argument vector
 * Return: zero
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
