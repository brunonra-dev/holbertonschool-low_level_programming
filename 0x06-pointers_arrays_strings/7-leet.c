#include "main.h"
/**
 * *leet - encodes a string into 1337.
 *
 * @ptr: array
 *
 * Return: Capitalized array
 */
char *leet(char *ptr)
{
	int i;
	char abc;
	int len = 0;

	while (ptr[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		abc = 'a';
		while (abc <= 'z')
		{
			if (ptr[i] == 'a' || ptr[i] == 'A')
				ptr[i] = 4;
			else if (ptr[i] == 'e' || ptr[i] == 'E')
			{
				ptr[i] = 3;
			}
			abc++;
		}
	}

	return (ptr);
}
