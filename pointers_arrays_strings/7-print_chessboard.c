#include "main.h"
/**
 * _print_chessboard - check the code
 * Description: print a chess board
 * @a : pionter to 2D array
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i, j = 0;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
		putchar('\n');
	}
}
