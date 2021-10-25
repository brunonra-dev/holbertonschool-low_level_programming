#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits.
 *
 * Return: 0 on success.
 */
int main(void)
{
	int i, j;

	j = 1;

	for (i = 0; i <= 8; i++)
	{
		for (; j <= 9; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (i != 8 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
		j = i + 2;
	}

	putchar('\n');

	return (0);
}
