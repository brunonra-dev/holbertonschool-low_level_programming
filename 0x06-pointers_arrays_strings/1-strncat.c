#include "main.h"
/**
 * *_strncat - concatenates two strings.
 *
 * @dest: dest string
 * @src: src string
 * @n: bytes from src
 *
 * Return: a pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len, src_len, i;

	for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)
		;

	for (src_len = 0; src[src_len] != '\0'; src_len++)
		;

	for (i = 0; i < n && i < src_len; i++)
	{
		dest[dest_len + i] = src[i];
	}

	return (dest);
}
