#include "main.h"
/**
 * aux - funcion aux.
 *
 * @n: integer
 * @i: integer
 *
 * Return: square root
 */
int aux(int n, int i)
{
	if (n <= i)
		return (1);
	if (n % i == 0)
		return (0);
	else
		return (aux(n, i + 1));
}

/**
  * is_prime_number - check that n is prime number.
  *
  * @n: integer.
  *
  * Return: returns 1 if the input integer is a prime number,
  * otherwise return 0.
  */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	else
		return (aux(n, 2));
}
