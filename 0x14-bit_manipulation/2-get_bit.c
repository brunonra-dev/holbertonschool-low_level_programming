#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 *
 * @n: n evaluated
 * @index: is the index, starting from 0
 *
 * Return: the value of the bit at an index given or -1 if there's a fail
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	return ((n >> index) & 1);
}
