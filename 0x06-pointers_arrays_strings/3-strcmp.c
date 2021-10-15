#include "main.h"
/**
 * *_strcmp - compares two strings.
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: return difference.
 */
int _strcmp(char *s1, char *s2)
{
	int s1_len, s2_len, i, sum1, sum2;

	for (s1_len = 0; s1[s1_len] != '\0'; s1_len++)
		sum1 += s1[s1_len];

	for (s2_len = 0; s2[s2_len] != '\0'; s2_len++)
		sum2 += s2[s2_len];

	i = sum1 - sum2;

	return (i);
}
