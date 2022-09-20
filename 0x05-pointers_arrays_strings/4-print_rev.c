/* This program prints the screen in reverse */
#include "main.h"
/**
 * print_rev - Display screen in reverse form
 * @s: pointer to char
 */
void print_rev(char *s)
{
	int i, k;
	
	i = 0;
	while (s[i] != '\0')
		i++;
	
	for (k = i; k >= 0; k--)
		_putchar(s[k]);
	_putchar('\n');
}
