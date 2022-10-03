/*
 * This program returns 1 or 0
 * based on the type of character
 */
#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _isupper- This function checks 4
 * uppercase character
 * @c: means parameter is an int
 * Return: 1 or 0, depending on the
 * case type of character c
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
