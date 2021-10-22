#include "main.h"
/**
 * *_strcpy - copy array
 *
 * @dest: string dest
 * @src: string src.
 *
 * Return: 0 on success
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (0);
}
