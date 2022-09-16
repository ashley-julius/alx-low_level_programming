#include <stdio.h>

/**
 * * main - causes an infinite loop
 * * Return: 0
 */

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");
	i = 0;
	while (i < 10)
	{
		putchar(i);
	}
	     /*
	     * We called a while loop
	     * but we omitted our coutner
	     * which served as our breaker out
	     * of the loop, which should have been
	     * i++ i.e. post-increment
	     */
	printf("Infinite loop avoided!  \\o/\n");
	return (0);
}
