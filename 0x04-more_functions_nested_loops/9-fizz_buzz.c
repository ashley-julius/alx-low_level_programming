/*
 * This program substitute
 * a word for multiples of 3, 5
 * and 3 and 5
 */
#include <stdio.h>
#include <stdlib.h>
/**
 * main- Entry point
 * Return: void
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{

		if ((i % 5 == 0) && (i % 3 == 0))
			printf("FizzBuzz ");
		else if ((i % 3) == 0)
			printf("Fizz ");
		else if ((i % 5) == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	putchar('\n');
	return (0);
}
