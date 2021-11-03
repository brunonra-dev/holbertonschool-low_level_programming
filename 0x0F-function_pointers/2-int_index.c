/**
 * int_index - searches for integer.
 *
 * @array: array.
 * @size: elements of array.
 * @cmp: is a pointer to the function to be used to compare values.
 *
 * Return: returns the index of the first element for which the
 * cmp function does not return 0, If no element matches, return -1
 * If size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, ret = -1;

	if (!size)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			ret = i;
			break;
		}
	}

	return (ret);
}
