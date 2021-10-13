#include "main.h"
/**
 * puts_half - print half of string
 *
 * @str: string
 */
void puts_half(char *str)
{
	int len = 0;
	int half;

	while (str[len] != '\0')
	{
		len++;
	}

	half = len / 2;

	while (half < len)
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
