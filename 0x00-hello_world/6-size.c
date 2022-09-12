/*This program prints the various size of any computer it is run on*/
#include <stdio.h>
/**
 * main-This is where our starts
 * @void: indicates the main function has no arguments
 * Return: zero, which would passed to the status variable
 */
int main(void)
{
	/*
	 * Display the size of a char in byte
	 */
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	/*
	 * Display the size of an int in bytes
	 */
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	/*
	 * Display the size of a long int in bytes
	 */
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	/*
	 * Display the size of a long long int in bytes
	 */
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	/*
	 * Display the size of a float in byte
	 */
	printf("Size of a float: %d byte(s)\n", sizeof(float));

	return (0);
}
