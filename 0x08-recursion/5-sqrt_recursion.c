#include "main.h"
/**
 * aux_sqrt - funcion aux.
 *
 * @n: integer
 * @i: integer
 *
 * Return: square root
 */
int aux_sqrt(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	else
		return (aux_sqrt(n, i + 1));
}

/**
  * _sqrt_recursion - returns the natural square root of a number.
  * aux_sqrt - dsad
  * @n: integer.
  * Return: natural square root of a number.
  */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (aux_sqrt(n, 0));
}
