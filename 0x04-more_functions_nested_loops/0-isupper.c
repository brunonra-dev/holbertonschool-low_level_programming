#include "main.h"
/**
 *_islower - function that checks for uppercase character
 *@c: The character to compere
 *Return: 1 if c is uppercase
 *On error: 0 is returned
 */
int _islower(int c)
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
