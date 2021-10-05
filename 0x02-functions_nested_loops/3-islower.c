#include "main.h"
/**
 *_islower - function that checks for lowercase character
 *@c: The character to compere
 *Return: 1 if c is lowercase
 *On error: 0 is returned
 */
int _islower(int c)
{
	char abc = 'a';
	int ret = 0;

	while (abc <= 'z')
	{
		if (c == abc)
		{
			ret = 1;
		}
		abc++;
	}
	return (ret);
}
