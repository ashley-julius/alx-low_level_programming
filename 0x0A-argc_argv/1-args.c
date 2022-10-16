/* This program provides more understanding on command line arguments */
#include <stdio.h>
/**
 * main - Entry points
 * @argc: argument counts
 * @argv: argument vectors
 * Return: an int
 */
int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;
	if (argc < 2)
	{
		sum = 0;
	}
	else
	{
		for (i = 0; (i < argc && argv[0] != 0); i++)
		{
			if (i > 0)
				sum += 1;
		}
	}
	printf("%d\n", sum);
	return (0);
}

