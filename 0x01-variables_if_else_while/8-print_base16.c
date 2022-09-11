/*
 * This program prints all numbers to base 16,
 * in lowercase
 */
#include <stdio.h>
/**
 * main- This is where our code starts
 * @void-means our function main takes
 * no argument
 * Return: zero
 */
int main(void)
{
	/*
	 *  Define our counter and char holder
	 */
	char i;
	char ch;

	/*
	 * loop
	 */
	for (i = '0'; i <= '9'; i++)
		putchar(i);
		/*
		 * Another loop
		 */
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	/*
	 * Display newline
	 */
	putchar('\n');
	return (0);
}
