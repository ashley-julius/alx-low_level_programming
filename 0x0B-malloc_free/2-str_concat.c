/* This function concatenates two string */
#include "main.h"
#include <stdlib.h>
/**
 * str_concat - This function concatenates to string into one
 * @s1: pointer to char
 * @s2: pointer to char
 * Return: a pointer to char
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, k, i, j, m;
	char *new_string;

	len1 = len2 = i = j = 0;
	while (s1[i] != '\0')
	{
		i++;
		len1++;
	}
	while (s2[j] != '\0')
	{
		j++;
		len2++;
	}
	new_string = malloc((len1 + len2 + 1) * sizeof(char));
	if (new_string == NULL)
		return (new_string);
	if ((s1 == NULL) || (s2 == NULL))
		*new_string = '\0';
	for (k = 0; k < len1; k++)
		*(new_string + k) = s1[k];
	for (m = 0; m <= len2; m++)
	{
		k = len1 + m;
		*(new_string + k) = s2[m];
	}
	return (new_string);
}
