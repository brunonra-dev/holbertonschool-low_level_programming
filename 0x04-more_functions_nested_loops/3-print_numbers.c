#include "main.h"
/**
 *print_numbers - function that prints the numbers,
 *followed by a new line.
 *Return: 0
 */
void print_numbers(void)
{
	char n = '0';

	while (n <= '9')
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
