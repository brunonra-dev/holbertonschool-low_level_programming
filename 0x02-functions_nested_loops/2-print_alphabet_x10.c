#include "main.h"
/**
 *print_alphabet - function that prints the alphabet, in lowercase,
 *followed by a new line.
 *Return: 0
 */
void print_alphabet(void)
{
	char abc = 'a';
	int i = 1;

	while (i <= 10)
	{
		while (abc <= 'z')
		{
			_putchar(abc);
			abc++;
		}
		i++;
	}
	_putchar('\n');
}
