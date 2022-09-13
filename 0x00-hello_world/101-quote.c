/*
 * This code print a screen using
 * the write function
 */
#include <stdio.h>
#include <unistd.h>
/**
 *main - Entry point
 *Return: Always 1 (failure)
 */
int main(void)
{
	       /*
		* write the message to stderr
		*/
		write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",

		sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19"));

		return (1);
}
