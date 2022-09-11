/*
 *This program prints the base ten digits
 * starting from using only putchat
 */
#include <stdio.h>
/**
 * main- This is where our code starts
 * @void- this means main has no arguments
 * Return: zero
 */
int main(void)
{
	/*
	 *  define a new int named ch
	 */
	int ch;

	/*
	 * loop
	 */
	for (ch = 0; ch <= 9; ch++)
		putchar(ch);
	putchar('\n');

	return (0);
}
