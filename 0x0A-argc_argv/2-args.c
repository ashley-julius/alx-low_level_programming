/*
 * My aim for this project is to give you more understanding on
 * command line arguments in the C Language
 */
#include <stdio.h>
/**
 * main - Entry points
 * @argc: argument counts
 * @argv: argument vectors
 * Return: zero
 */
int main(int argc, char *argv[])
{
	int i;

	if (argv == NULL)
	{
		return (1);
	}
	else
	{
		for (i = 0; i < argc; i++)
			printf("%s\n", argv[i]);
	}
	return (0);
}
