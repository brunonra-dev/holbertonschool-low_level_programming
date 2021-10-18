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
	int i;

	for (i = 0; s[i] != '\0' && accept[i] != '\0'; i++)
		;
	i++;

	return (i);
}
