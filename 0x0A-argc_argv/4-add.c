/* This program shows how we could use argv as a two dimensional */
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry points
 * @argc: arguments counts
 * @argv: arguments vector
 * Return: zero or one
 */
int main(int argc, char *argv[])
{
	int i, sum, column;

	if (argv == NULL)
		return (1);
	if (argc == 1)
		printf("%d\n", 0);
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (column = 0; argv[i][column] != '\0'; column++)
			{
				if (argv[i][column] < '0'
						|| argv[i][column] > '9')

				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
