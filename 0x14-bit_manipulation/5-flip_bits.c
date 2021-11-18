#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip to get from
 * one number to another.
 *
 * @n: number 1
 * @m: number 2
 *
 * Return: returns the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int aux;
	unsigned int i = 0;

	aux = (n ^ m);

	while (aux)
	{
		i += (aux & 1);
		aux >>= 1;
	}

	return (i);
}
