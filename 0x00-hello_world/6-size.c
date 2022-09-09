/*This program prints the various size of any computer it is run on*/
#include <stdio.h>
/**
 * main-This is where our starts
 * @void: indicates the main function has no arguments
 * Return: zero, which would passed to the status variable
 */
int main(void)
{
	/*Print the size of a char in byte */
	printf("Size of a char: %i %s", 1 "byte(s)\n");
	/*Print the size of an int in bytes */
	printf("Size of an int: %i %s", 4 "byte(s)\n");
	/*Print the size of a long int in bytes */
	printf("Size of a long int: %i %s", 4 "byte(s)\n");
	/*Print the size of a long long int in bytes */
	printf("Size of a long long int: %i %s", 8 "byte(s)\n");
	/*Print the size of a float in byte */
	printf("Size of a float: %i %s", 4 "byte(s)");

	return (0);
}
