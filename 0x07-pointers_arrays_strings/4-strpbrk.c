#include "main.h"
/**
 * *_strpbrk - searches a string for any of a set of bytes.
 *
 * @s: string.
 * @accept: characters to match.
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if the character is not found.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j, r;
	char *ret = '\0';

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				ret = &s[i];
				r = 1;
				break;
			}
		}
		if (r == 1)
			break;
	}
	return (ret);
}
