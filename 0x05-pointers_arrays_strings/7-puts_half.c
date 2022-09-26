/* This program only prints half of an array */
#include "main.h"
/**
 * puts_half - prints half of the array
 * @str: pointer to a char
 */
void puts_half(char *str)
{
	int i, lenght, n;

	i = 0;
	while (str[i] != '\0')
		i++;
	lenght = i;
	if (lenght % 2 == 1)
		n = (lenght - 1) / 2;
	else
		n = lenght / 2;
	for (; n <= lenght; n++)
		_putchar(*(str + n));
	_putchar('\n');
}
