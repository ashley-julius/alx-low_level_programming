/* This function encodes a string using rot13 */
#include "main.h"
/**
 ** *rot13 - encodes string using rot13
 ** @s: pointer to char
 ** Return: s
 */
char *rot13(char *s)
{
	/*
	 * loop counter
	 */
	int i;

	i = 0;
	/*
	 * Do this until you find a '\0'
	 */
	for (i = 0; s[i] != '\0'; i++)
	{
		if ((*(s + i) >= 'a' && *(s + i) < 'n') ||
(*(s + i) >= 'A' && *(s + i) <= 'M'))
			*(s + i) += 13;
		else if ((*(s + i) >= 'n' && *(s + i) <= 'z') ||
(*(s + i) >= 'N' && *(s + i) <= 'Z'))
			*(s + i) -= 13;
	}
	return (s);
}
