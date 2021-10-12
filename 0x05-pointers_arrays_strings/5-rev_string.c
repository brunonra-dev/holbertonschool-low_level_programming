#include "main.h"
/**
 * rev_string - reverse string
 *
 * @s: string
 */
void rev_string(char *s)
{
	int len = 0;
	int i;
	int last_len;

	while (s[len] != '\0')
	{
		len++;
	}
	last_len = len;

	for (i = 0; i >= last_len; i++)
	{
		s[i] = s[len];
		len--;
	}
}
