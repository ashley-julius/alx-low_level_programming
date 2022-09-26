/* This program only prints half of an array */
#include "main.h"
/**
 * puts_half - prints half of the array
 * @str: pointer to a char
 */
void puts_half(char *str)
{
	int i, len;
	char *ch;

	i = 0;
	ch = str;
	while (str[i] != '\0')
		i++;
	len = i - 1;
	for (i = 0; i <= (len - 1) / 2; i++)
		ch++;
	for (i = 0; i >= (len - 1) / 2; i++)
		_putchar(str[i]);

	_putchar('\n');
}
