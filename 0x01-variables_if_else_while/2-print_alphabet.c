/* This program converts the alphabets to lowercase */
#include <stdio.h>
#include <ctype.h>
/**
 * main-This where our code starts
 * @void-main takes no argument
 * Return: zero
 */
int main(void)
{
	/*
	 * container for each char when we loop
	 */
	char chr;

	/*
	 * loop
	 */
	for (chr = 'a'; chr <= 'z'; chr++)
	{
		chr = tolower(chr);
		putchar(chr);
	}
	putchar('\n');

	return (0);
}
