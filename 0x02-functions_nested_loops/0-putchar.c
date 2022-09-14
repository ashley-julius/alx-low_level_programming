/*
 * This is a function that prints a set
 * of char with the right command
 */
#include "main.h"
#include <stdio.h>

/**
 * _putchar - writes the character c
 *to stdout
 * @void: means the function takes
 * no argument
 * Return: zero
 */
char _putchar(void)
{
	char ch[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r', '\0'};
	int i;

	/*
	 * for loop
	 */
	for (i = 0; i <= 9; i++)
		putchar(ch[i]);
	putchar('\n');
	return (0);

}

/**
 *main- Entry point
 *@void- means our main function has no argument
 *Return: zero
 */
int main(void)
{
	/*
	* Invoking the _putchar function
	*/

	_putchar();
	return (0);
}
