/* This function concatenates two string */
#include "main.h"
#include <stdlib.h>
/**
 * _stringlength - finding the length of any string
 * @s: string literal
 * Return: an int
 */
int _stringlength(char *s)
{
	int k;

	k = 0;
	while (s[k] != '\0')
		k++;
	return (k);
}

/**
 * str_concat - This function concatenates to string into one
 * @s1: pointer to char
 * @s2: pointer to char
 * Return: a pointer to char
 */
char *str_concat(char *s1, char *s2)
{
	int total_len, i, len1, len2;
	char *tmp;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = _stringlength(s1);
	len2 = _stringlength(s2);
	total_len = len1 + len2 + 1;
	tmp = (char *)malloc(sizeof(char) * total_len);
	if (tmp == NULL)
		return (tmp);
	for (i = 0; i < len1; i++)
		*(tmp + i) = *(s1 + i);
	for (i = 0; i <= len2; i++)
		*(tmp + len1 + i) = *(s2 + i);
	return (tmp);
}
