#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 *
 * @separator:  string to be printed between numbers.
 * @n: number of integers passed to the function.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, j;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i < n - 1)
		{
			for (j = 0; separator[j] != '\0'; j++)
				printf("%c", separator[j]);
		}
	}

	va_end(ap);

	printf("\n");
}
