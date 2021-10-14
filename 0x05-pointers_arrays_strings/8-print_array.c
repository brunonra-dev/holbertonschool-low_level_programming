#include <stdio.h>
/**
 * print_array - print array
 *
 * @a: string
 * @n: nelements of an array
 */
void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
	for (i = 0; i <= n; i++)
	{
		printf("%d", a[i]);
		if (i == (n - 1))
		{
			break;
		}
		printf(", ");
	}
	}
	printf("\n");
}
