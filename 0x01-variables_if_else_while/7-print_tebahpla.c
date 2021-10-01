#include <stdio.h>
/**
 *main - void
 *Return: 0
 */
int main(void)
{
	int abc = 122;

	while (abc >= 97)
	{
		putchar(abc);
		abc--;
	}
	putchar('\n');
	return (0);
}
