#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of
 * integers using the Binary search algorithm.
 *
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search
 *
 * Return: index
 */

int binary_search(int *array, size_t size, int value)
{
	int length = size - 1, min = 0, med = 0, temp = 0;

	if (!array)
		return (-1);

	while (min <= length)
	{
		temp = min;
		printf("Searching in array: ");
		while (temp <= length)
		{
			printf("%d", array[temp]);
			if (temp != length)
				printf(", ");
			temp++;
		}
		printf("\n");
		med = (length + min) / 2;

		if (array[med] == value)
			return (med);
		if (array[med] < value)
			min = med + 1;
		else
			length = med - 1;
	}
	return (-1);
}
