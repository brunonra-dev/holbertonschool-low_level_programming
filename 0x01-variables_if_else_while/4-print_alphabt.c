#include <stdio.h>
/**
 *main - Print the alphabet - 'e' and 'q'
 *Return: 0
 */
int main(void)
{
	char abc = 'a';

	while (abc <= 'z')
	{
		if (abc != 'e' && abc != 'q')
		{
			putchar(abc);
		}
		abc++;
	}

	putchar('\n');
	return (0);
}
