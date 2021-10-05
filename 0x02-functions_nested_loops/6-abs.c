#include "main.h"
/**
 *_abs - function that computes the absolute value of an integer.
 *@n: The character to compere
 *Return: 0
 *On error: 1 is returned
 */
int _abs(int n)
{
	int ret;

	if (n >= 0)
	{
		ret = n;
	} else
	{
		ret = n * -1;
	}

	return (ret);

}
