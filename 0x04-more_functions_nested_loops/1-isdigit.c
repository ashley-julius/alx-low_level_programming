/*
 * This program returns 1 or 0
 * if @c is a digit or not
 * @c: parameter of an int
 * Return zero or one
 */
#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _isdigit- This function checks 4
 * a digit or not
 * @c: means parameter is an int
 * Return: 1 or 0, depending on the
 * condition
 */
int _isdigit(int c)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (isdigit(c) == i)
			return (1);
		else
			return (0);
	}

}
