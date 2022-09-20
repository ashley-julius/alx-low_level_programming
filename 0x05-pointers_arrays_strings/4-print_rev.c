/* This program prints the screen in reverse */
#include "main.h"
/**
 * print_rev - Display screen in reverse form
 * @s: pointer to char
 */
void print_rev(char *s)
{
	int i, k, j;
	
	i = 0;
	while (s[i] != '\0')
		i++;
	j = i -1;
	for (k = j; k >= 0; k--)
		_putchar(s[k]);
	_putchar('\n');
}
