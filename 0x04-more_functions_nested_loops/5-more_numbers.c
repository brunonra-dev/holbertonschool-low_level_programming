#include "main.h"
/**
 *more_numbers - function that prints numbers,
 *10 times, followed by a new line.
 *Return: 0
 */
void more_numbers(void)
{
	int i = 1;
	char num2;
	char num;

	while (i <= 10)
	{
		for (num = '0'; num <= '9'; num++)
		{
			_putchar(num);
		}
		for (num2 = '0'; num2 <= '4'; num2++)
		{
			_putchar('1');
			_putchar(num2);
		}
		_putchar('\n');
		i++;
	}
}
