#include "main.h"
/**
 *print_alphabet_x10 - function that prints the alphabet, in lowercase,
 *10 times, followed by a new line.
 *Return: 0
 */
void print_alphabet_x10(void)
{
	char abc;
	int i = 1;

	while (i <= 10)
	{
		abc = 'a';
		while (abc <= 'z')
		{
			_putchar(abc);
			abc++;
		}
		_putchar('\n');
		i++;
	}
}
