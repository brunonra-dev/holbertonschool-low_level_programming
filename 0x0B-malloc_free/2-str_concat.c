#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 *
 * @s1: first array.
 * @s2: second array.
 *
 * Return: pointer to the concatenated array, or NULL if it fails.
 */
char *str_concat(char *s1, char *s2)
{
	char *con_str;
	int s1_len, s2_len;
	int i, j;

	i = j = 0;

	if (s1 != 0 || s2 != 0)
	{
		for (s1_len = 0; s1[s1_len] != 0; s1_len++)
			;
		for (s2_len = 0; s2[s2_len] != 0; s2_len++)
			;
	}
	else
	{
		s1_len = 1;
		s2_len = 2;
	}
	con_str = malloc(s1_len + s2_len + 1);
	if (con_str == 0)
	{
		return (NULL);
	}
	else
	{
		while (i <= s1_len)
		{
			con_str[i] = s1[i];
			i++;
		}

		while (j <= s2_len)
		{
			con_str[j + s1_len] = s2[j];
			j++;
		}

		return (con_str);
	}
}
