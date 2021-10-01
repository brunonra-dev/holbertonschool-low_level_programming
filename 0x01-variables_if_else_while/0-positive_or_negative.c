#include <stdlib.h>
#include <time.h>
/**
 *main - Print if a number is positive or negative
 *Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n >= 0)
	{
		printf(n + "is positive")
	} else
	{
		printf(n + "is negative")
	}

	return (0);
}
