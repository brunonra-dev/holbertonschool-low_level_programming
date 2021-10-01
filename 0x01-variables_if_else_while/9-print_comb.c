#include <stdio.h>
/**
 *main - void
 *Return: 0
 */
int main(void)
{
	int num = 48;

	do {
		putchar(num);
		if (num != 57)
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	} while (num <= 57);
	putchar('\n');
	return (0);
}
