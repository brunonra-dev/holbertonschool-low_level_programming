#include "main.h"
/**
 * *cap_string - capitalizes letters of a string.
 *
 * @ptr: array
 *
 * Return: Capitalized array
 */
char *cap_string(char *ptr)
{
	int i, j;
	char abc;
	int len = 0;
	char sep[13] = " \t\n,;.!?\"(){}";

	while (ptr[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (ptr[i] == sep[j])
			{
				i++;
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
				i--;
			}
		}
	}

	return (ptr);
}
