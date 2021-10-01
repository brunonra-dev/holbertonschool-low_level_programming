#include <stdio.h>
/**
 *main - Print the alphabet
 *Return: 0
 */
int main(void)
{
	char abc = 'a';

	while (abc <= 'z')
	{
		putchar(abc);
		abc++;
	}
	putchar('\n');
	return (0);
}
