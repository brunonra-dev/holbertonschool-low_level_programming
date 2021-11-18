#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 *
 * @n: decimal
 */

void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int con;

	for (i = 63; i >= 0; i--)
	{
		con = n >> i;

		if (con & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
