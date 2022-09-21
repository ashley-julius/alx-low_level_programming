/* This program only prints half of an array */
#include "main.h"
/**
 * puts_half - prints half of the array
 * @str: pointer to a char
 */
void puts_half(char *str)
{
	int i, len;

	i = 0;
	while (str[i] != '\0')
		i++;
	len = i;
	for (i = 0; i < len / 2; i++)
		_putchar(str[i]);
	_putchar('\n');
}
