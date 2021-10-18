#include "main.h"
/**
 * *_strstr - locates a substring.
 *
 * @haystack: string.
 * @needle: characters to match.
 *
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the character is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, count, n_len;
	char *ret = '\0';

	count = n_len = 0;

	while (needle[n_len] != '\0')
		n_len++;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] == needle[j])
					count++;
			}

			if (count == n_len)
			{
				ret = &haystack[i];
				break;
			}
		}
	}
	return (ret);
}
