/* This program only prints half of an array */
#include "main.h"
#include <stdio.h>
/**
 * puts_half - prints half of the array
 * @str: pointer to a char
 */
void puts_half(char *str)
{
	int len, new_len;

	len = 0;
	while (*(str + len) != '\0')
		len++;
	if (len % 2 == 0)
		new_len = len / 2;
	else
		new_len = (len - 1) / 2;
	while (*(str + new_len) != '\0')
	{
		_putchar(*(str + new_len));
		new_len++;
	}
	_putchar('\n');
}
