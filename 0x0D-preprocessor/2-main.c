/* This program prints the name of the file it was compile from */
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: zero
 */
int main(void)
{
	printf("File: %s\n", __FILE__);
	return (0);
}
