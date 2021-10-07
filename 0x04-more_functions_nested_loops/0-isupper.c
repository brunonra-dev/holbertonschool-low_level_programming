#include "main.h"
/**
 *_isupper - function that checks for uppercase character
 *@c: The character to compere
 *Return: 1 if c is uppercase
 *On error: 0 is returned
 */
int _isupper(int c)
{
	char abc = 'A';
	int ret = 0;

	while (abc <= 'Z')
	{
		if (c == abc)
		{
			ret = 1;
		}
		abc++;
	}
	return (ret);
}
