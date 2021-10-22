#include "main.h"
/**
  * *_strcpy - copy string.
  *
  * @src: string src
  * @dest: string dest
  *
  * Return: the pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
