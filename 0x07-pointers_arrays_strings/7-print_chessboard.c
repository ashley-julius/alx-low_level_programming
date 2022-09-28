/* This program prints a chess board */
#include <stdio.h>
#include "main.h"
/**
 * print_chessboard - This function prints a chess board
 * @a: pointer to a matrix array
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i <= 7; i++)
	{
		for (j = 0; j <= 7; j++)
			_putchar(*(*(a + i) + j));
		_putchar('\n');
	}
	_putchar('\n');
}
