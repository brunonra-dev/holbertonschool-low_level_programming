#include <stdio.h>
/**
  * print_diagsums - prints the sum of the two diagonals of a
  * square matrix of integers;
  *
  * @a: square matrix of integer.
  * @size: size of matrix;
  */
void print_diagsums(int *a, int size)
{
	int i, sum, sum2;

	sum = sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum = sum + a[i * (size + 1)];
	}

	for (i = size; i > 0; i--)
	{
		sum2 = sum2 + a[i * (size - 1)];
	}

	printf("%d, %d\n", sum, sum2);
}
