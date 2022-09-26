/*
* This program prints the
* absolute value of an int
*/
#include "main.h"
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * * _abs- print a single character
 * * to the screen or stdout
 * * @num: takes a int parameter
 * * Return: the character
 */
int _abs(int num)
{
	if (num < 0)
		num = num * -1;
	return (num);
}
