#include "main.h"
/**
  * _strlen_recursion - return the length of a string.
  *
  * @s: String.
  * Return: length.
  */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == 0)
	{
		return (i);
	}

	i++;
	return (i += _strlen_recursion(s + 1));
}
