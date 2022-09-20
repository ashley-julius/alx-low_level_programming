/* This program prints the screen in reverse */
#include "main.h"
/**
 * rev_string - Display string in reverse form
 * @s: pointer to char
 */
void rev_string(char *s)
{
	int i, k, j;
	
	i = 0;
	while (s[i] != '\0')
		i++;
	j = i -1;
	for (k = 0; k > j; k++)
		_putchar(s[k]);
	_putchar('\n');
}
