/*
 * This program prints the last
 * digit of a number
 */
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_last_digit-prints the
 * last digit of a number
 * @x: an in parameter
 * Return: the last digit
 */
int print_last_digit(int x)
{
	int n = (x % 10);
	return (n);
}
