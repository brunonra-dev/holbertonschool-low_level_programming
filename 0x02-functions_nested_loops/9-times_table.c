#include "main.h"
/**
 * times_table - function that print the 9 time table
 *
 *Return: void
 */
void times_table(void)
{
	int i, n, num;

	for (n = 0; n < 10; n++)
	{
		for (i = 0; i < 10; i++)
		{
			num = i * n;
			_putchar(num + '0');
			_putchar(',');
			_putchar('\n');
			_putchar('\n');
		}
		_putchar('\n');
	}

}
