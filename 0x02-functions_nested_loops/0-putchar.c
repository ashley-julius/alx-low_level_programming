/*
 * This is a function that prints a set
 * of char with the right command
 */
#include <unistd.h>
#include "main.h"
#include <stdio.h>
/**
 *  * main - check the code.
 *   * @void: means main takes
 *    * no argument
 *     * Return: Always 0.
 */
int main(void)
{
	int i;
	char ch[9] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r', '\n'};

	for (i = 0; i < 9; i++)
		_putchar(ch[i]);
	return (0);
}
