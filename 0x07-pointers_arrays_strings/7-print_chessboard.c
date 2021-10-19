#include "main.h"
/**
 * print_chessboard - prints the chessboard.
 *
 * @a: array;
 */
void print_chessboard(char (*a)[8])
{
	int row, col;

	for (col = 0; col < 8; col++)
	{
		for (row = 0; row < 8; row++)
		{
			if (a[col][row] != ' ')
				_putchar(a[col][row]);
		}
		_putchar('\n');
	}
}
