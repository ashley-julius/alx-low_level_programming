/* This program prints the base ten numerals */
#include <stdio.h>
/**
 * main-This is where our code starts
 * @void-this means the main has no arguments
 * Return: zero
 */
int main(void)
{
	/*
	 * Declare our counter
	 */
	int i;

	/* loop */
	for (i = 0; i <= 9; i++)
		printf("%d", i);
	putchar('\n');

	return (0);
}
