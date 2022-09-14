/*
 * This is a function that prints a set
 * of char with the right command
 */
#include <unistd.h>
#include "main.h"
#include <stdio.h>

/**
 * _putchar - writes the character c
 *to stdout
 * @void: means the function takes
 * no argument
 * Return: zero
 */
int _putchar(void)
{
	/*
	 * Declaring the word to print
	 */
	char *word = "_putchar\n";

	return (write(1, word, 9));


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
