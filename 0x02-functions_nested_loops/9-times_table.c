#include "main.h"
/**
 * times_table - function that print the 9 time table
 *
 *Return: void
 */
void times_table(void)
{
	int cel, row, val, val_last, val_first;

	for (row = 0; row < 10; row++)
	{
		for (cel = 0; cel < 10; cel++)
		{
			val = cel * row;
			if (val > 9)
			{
				if (cel != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				val_last = val % 10;
				val_first = val / 10;
				_putchar(val_first + '0');
				_putchar(val_last + '0');
			} else
			{
				if (cel != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(val + '0');
			}
		}
		_putchar('\n');
	}

}
