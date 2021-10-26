#include <stdlib.h>
/**
 * create_array - creates an array of chars, and initializes it
 * with a specific char.
 *
 * @size: size of array.
 * @c: initial char.
 *
 * Return: pointer to the array, or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i = 0;

	if (size > 0)
	{
		str = malloc(size);
		while (i < size)
		{
			str[i] = c;
			i++;
		}
		return (str);
	}
	else
		return (0);

}
