#include <stdio.h>
/**
 *main - void
 *Return: 0
 */
int main(void)
{
	int num = 48;

	while (num <= 57)
	{
		putchar(num);
		putchar(' ');
		putchar(',');
		num++;
	}
	putchar('\n');
	return (0);
}
