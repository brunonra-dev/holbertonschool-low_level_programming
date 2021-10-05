#include "main.h"
/**
 *main - function that prints the alphabet, in lowercase,
 *followed by a new line.
 *Return: 0
 */
int main(void)
{
	char abc = 'a';

	while (abc <= 'z')
	{
		_putchar(abc);
		abc++;
	}
	_putchar('\n');
	return (0);
}
