#include "main.h"
/**
  * _atoi - convert a string to an integer.
  *
  * @s: string
  *
  * Return: an integer.
  */
int _atoi(char *s)
{
	int i;
	int num = 0;
	int sign = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sign *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			for (; s[i] >= '0' && s[i] <= '9'; i++)
			{
				num = num * 10 + (s[i] - 48);
			}
			break;
		}
	}

	if (sign == -1)
		num *= sign;

	return (num);
}
