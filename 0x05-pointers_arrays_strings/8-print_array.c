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

	for (i = 0; i <= n; i++)
	{
		printf("%d", a[i]);
		if (i != n)
		{
			printf(", ");
		}
	}
	printf("\n");
}
