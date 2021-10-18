#include "main.h"
/**
 * *_strchr - locates a character in a string.
 *
 * @s: string.
 * @c: character.
 *
 * Return: pointer to the first occurrence of the character c in the string s,
 * or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	int i;
	char *p;

	for (i = 0; s[i] != '\0' && s[i] != c; i++)
		;
	if (s[i] == c)
		p = &s[i] + 1;
	else
		p = '\0';

	return (p);
}
