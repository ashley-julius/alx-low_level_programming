/* This function prints every other array of character */
#include "main.h"
/**
 * puts2 - prints every other character of an array
 * @str: pointer to a char
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
		if (str[i] != '\0')
			_putchar(str[i]);
	_putchar('\n');
}
