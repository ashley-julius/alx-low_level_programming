/* This project brings new understanding of command line arguments */
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry points
 * @argc: arguments counts
 * @argv: arguments vector
 * Return: zero(success) or one(failure)
 */
int main(int argc, char *argv[])
{
	int change, i, digit;
	int coins[5] = {25, 10, 5, 2, 1};

	change = 0;
	i = 0;

	if (argv == NULL)
		return (1);
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	digit = atoi(argv[1]);

	if (digit < 0)
	{
		printf("%d\n", 0);
		return (0);
	}

	while (i <= 4)
	{
		while (digit >= coins[i])
		{
			change = change + 1;
			digit = digit - coins[i];
		}
		i++;
	}
	printf("%d\n", change);
	return (0);
}
