#include <stdio.h>
/**
 *main - void
 *Return: 0
 */
int main(void)
{
	int abcb16 = 48;
	int numb16 = 97;

	while (abcb16 <= 57)
	{
		putchar(abcb16);
		abcb16++;
	}

	while (numb16 <= 102)
	{
		putchar(numb16);
		numb16++;
	}
	putchar('\n');
	return (0);
}
