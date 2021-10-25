#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits.
 *
 * Return: 0 on success.
 */
int main(void)
{
	int i, j, h;

	j = 1;
	h = 2;

	for (i = 0; i <= 8; i++)
	{
		for (; j <= 9; j++)
		{
			for (; h <= 9; h++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(h + '0');
				if (i != 7 || h != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
			h = j + 2;
		}
		j = i + 1;
	}

	putchar('\n');

	return (0);
}
