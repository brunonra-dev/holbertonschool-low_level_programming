#include "main.h"
/**
 * reverse_array - reverses the content of an array.
 *
 * @a: array
 * @n: size of array
 *
 * Return: return difference.
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	n--;

	for (i = 0; i <= n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - i];
		a[n - i] = tmp;

	}

}
