/* This program only prints half of an array */
#include "main.h"
/**
 * puts_half - prints half of the array
 * @str: pointer to a char
 */
void puts_half(char *str)
{
	int i, len, j;

	i = 0;
	while (str[i] != '\0')
		i++;
	len = i - 1;
	len = len / 2;
	for (j = 5; j <= 10; j++)
		_putchar(*(str + j));

	_putchar('\n');
}
