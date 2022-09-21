/* This program prints the screen in reverse */
#include "main.h"
/**
 * rev_string - Display string in reverse form
 * @s: pointer to char
 */
void rev_string(char *s)
{
	int i, l, k;
	char *start, *end, ch;

	i = 0;
	start = s;
	end = s;
	while (s[i] != '\0')
		i++;
	l = i;
	for (k = 0; k < l - 1; k++)
		end++;
	for (k = 0; k < l / 2; k++)
	{
		ch = *end;
		*end = *start;
		*start = ch;
		start++;
		end--;
	}
}
