#include "main.h"
/**
 *more_numbers - function that prints numbers,
 *10 times, followed by a new line.
 *Return: 0
 */
void more_numbers(void)
{
	int i = 1;
	int j;

	while (i <= 10)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar(j / 10 + '0');
			}
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
		i++;
	}
}
