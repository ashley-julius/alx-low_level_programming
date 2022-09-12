/* This program a message to standard output */
#include <stdio.h>
#include <unistd.h>
#include <string.h>
/**
 * main- where everything starts
 * @void- Means our main has no arguments
 * Return: one
 */
int main(void)
{
	/*
	 * Array of n characters
	 */
	char *err = "and that piece of art is useful\"- Dora Korpar, 2015-10-19";
	/*
	 * Asking linux to write the array
	 * of len bytes to stderr
	 */
	write(2, *err, sizeof(char));
	return (1);
}
