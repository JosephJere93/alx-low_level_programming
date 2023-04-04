#include "main.h"

/**
 * print_chessboard
 * @a: array
 * Return:0 Always.
 */

void print_chessboard(char (*a)[8])
{
	int i, n;

	for (i = 0; i < 8; i++)
	{
		for (n = 0; i++)
			_putchar(a[i][n]);
		_putchar('\n');
	}
}
