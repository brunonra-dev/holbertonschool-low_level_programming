#include "main.h"
/**
 * *string_toupper - changes all lowercase letters of a string to uppercase.
 *
 * @ptr: array
 *
 * Return: Uppercase array
 */
char *string_toupper(char *ptr)
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
			if (ptr[i] == abc)
			{
				ptr[i] = ptr[i] - 32;
				break;
			}
			abc++;
		}
	}



	return (ptr);
}
