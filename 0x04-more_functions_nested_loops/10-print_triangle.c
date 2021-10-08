#include "main.h"
/**
 *print_triangle - function that draws a triangle in the termina.
 *@size: triagle size
 */
void print_triangle(int size)
{
	int i, j, t;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size - i; j++)
			{
				_putchar(' ');
			}
			for (t = 1; t <= i; t++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
