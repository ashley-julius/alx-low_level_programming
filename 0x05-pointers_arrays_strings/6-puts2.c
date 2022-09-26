/* This function prints every other array of character */
#include "main.h"
#include <stdio.h>
/**
 * puts2 - prints every other character of an array
 * @str: pointer to a char
 */
void puts2(char *str)
{
	int i, len;


	len = 0;
	while (str[len] != '\0')
		len++;

	for (i = 0; i < len - 1; i += 2)
		_putchar(*(str + i));
	_putchar('\n');
}
