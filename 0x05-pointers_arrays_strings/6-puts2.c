/* This function prints every other array of character */
#include "main.h"
/**
 * puts2 - prints every other character of an array
 * @str: pointer to a char
 */
void puts2(char *str)
{
	int i, len, j;

	i = 0;
	while (str[i] != '\0')
		i++;
	len = i;
	for (j = 0; j < len - 1; j += 2)
		_putchar(str[j]);
	_putchar('\n');
}
