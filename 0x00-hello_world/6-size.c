/*This program prints the various size of any computer it is run on*/
#include <stdio.h>
/**
 * main-This is where our starts
 * @void: indicates the main function has no arguments
 * Return: zero, which would passed to the status variable
 */
int main(void)
{
	/*Display the size of a char in byte */
	puts("Size of a char: 1 byte(s)");
	/*Display the size of an int in bytes */
	puts("Size of an int: 4 byte(s)");
	/*Display the size of a long int in bytes */
	puts("Size of a long int: 8 byte(s)");
	/*Display the size of a long long int in bytes */
	puts("Size of a long long int: 8 byte(s)");
	/*Display the size of a float in byte */
	puts("Size of a float: 4 byte(s)\n");

	return (0);
}
