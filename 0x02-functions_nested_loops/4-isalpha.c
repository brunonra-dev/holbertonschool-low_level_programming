#include "main.h"
/**
 *_isalpha - function that checks for alphabetic character
 *@c: The character to compere
 *Return: 1 if c is alphabetic character
 *On error: 0 is returned
 */
int _isalpha(int c)
{
	char abc = 'a';
	char abc_may = 'A';
	int ret = 0;

	while (abc <= 'z')
	{
		if (c == abc)
		{
			ret = 1;
		}
		abc++;
	}

	while (abc_may <= 'Z')
	{
		if (c == abc_may)
		{
			ret = 1;
		}
		abc_may++;
	}
	return (ret);
}
