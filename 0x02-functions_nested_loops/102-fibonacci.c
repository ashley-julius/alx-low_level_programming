#include <stdio.h>

/**
 * main - Entry point
 * Description: prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: 0 on success
 */
int main(void)
{
	/* starting numbers */
	long int x = 1;
	long int y = 2;

	/* counts how many numbers have been computed*/
	int counter = 2;

	/* temporary variable to hold x */
	long int tmp;

	printf("%li, %li, ", x, y);

	while (counter <= 49)
	{
		printf("%li", x + y);

		if (counter <= 48)
			printf(", ");
		tmp = x;
		x = y;
		y = x + tmp;

		counter++;
	}
	putchar('\n');

	return (0);
}
