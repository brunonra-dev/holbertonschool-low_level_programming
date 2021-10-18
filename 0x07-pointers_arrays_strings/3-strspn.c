#include "main.h"
/**
 * *_strspn - gets the length of a prefix substring.
 *
 * @s: string.
 * @accept: bytes.
 *
 * Return: pointer to the first occurrence of the character c in the string s,
 * or NULL if the character is not found.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, ret = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s + i == *accept + j)
			{
				ret++;
			}
			if (s[i] == ' ')
			{
				break;
			}
		}
	}
	return (ret);
}
