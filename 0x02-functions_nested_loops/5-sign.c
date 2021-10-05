#include "main.h"
/**
 *print_sign - function prints the sign of a number
 *@n: The character to compere
 *Return: 1 if c is alphabetic character
 *On error: 0 is returned
 */
int print_sign(int n)
{
	int ret = 0;

	if (n > 0)
	{
		ret = 1;
		_putchar('+');
	} else if (n == 0)
	{
		ret = 0;
		_putchar('0');
	} else
	{
		ret = -1;
		_putchar('-');
	}
	return (ret);
}
