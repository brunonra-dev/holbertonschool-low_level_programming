#include "main.h"
/**
 *_isdigit - function that checks for numeric character
 *@c: The character to compere
 *Return: 1 if c is numeric character
 *On error: 0 is returned
 */
int _isdigit(int c)
{
	char abc = '0';
	int ret = 0;

	while (abc <= '9')
	{
		if (c == abc)
		{
			ret = 1;
		}
		abc++;
	}

	return (ret);
}
