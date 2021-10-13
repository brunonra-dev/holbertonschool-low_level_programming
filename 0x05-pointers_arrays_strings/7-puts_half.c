#include "main.h"
/**
 * puts_half - print half of string
 *
 * @str: string
 */
void puts_half(char *str)
{
	int len = 0;
	int half, i;

	while (str[len] != '\0')
	{
		len++;
	}
	half = (len - 1) / 2;
	for (i = 0; i < half; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
