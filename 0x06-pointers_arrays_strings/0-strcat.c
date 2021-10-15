#include "main.h"
/**
 * *_strcat - concatenates two strings.
 *
 * @dest: dest string
 * @src: src string
 *
 * Return: a pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	int dest_len, src_len, i;

	for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)
		;

	for (src_len = 0; src[src_len] != '\0'; src_len++)
		;

	for (i = 0; i <= src_len; i++)
	{
		dest[dest_len + i] = src[i];
	}

	return (dest);
}
