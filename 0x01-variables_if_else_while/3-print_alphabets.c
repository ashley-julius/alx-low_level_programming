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
	 * counter in the first and nested loop
	 */
	char chr;
	char j;

	/*
	 * container for each upper and  lower case char when we loop
	 */
	char lower_case_char;
	char upper_case_char;

	/*
	 * loop
	 */
	for (chr = 'a'; chr <= 'z'; chr++)
	{
		/*
		 * convert char chr to lowercase
		 */
		lower_case_char = tolower(chr);
		putchar(lower_case_char);
	}
		/*
		 * convert char chr to uppercase
		 */
	for (j = 'a'; j <= 'z'; j++)
	{
		upper_case_char = toupper(j);
		/*
		* print the upper case char
		*/
		putchar(upper_case_char);
	}
	/*
	 * print a newline
	 */
	putchar('\n');
	return (0);
}
