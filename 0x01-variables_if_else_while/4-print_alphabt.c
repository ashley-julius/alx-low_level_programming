/*
 * This program prints all letters of the word
 * 'alphabet' except the char 'q' and 'e'
 */
#include <stdio.h>
#include <ctype.h>
/**
 * main- This is where our code starts
 * @void-means our main has no argument
 * Return: zero
 */
int main(void)
{
	/*
	 * Declares our index, and the char array
	 */
	int i = 0;
	char name[] = "alphabets\n";

	/*
	 * our while loop
	 */
	while (name[i])
	{
		if (name[i] != 'q' && name[i] != 'e')
			putchar(name[i]);
		i++;
	}
	return (0);
}
