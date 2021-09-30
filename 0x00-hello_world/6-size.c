#include <stdio.h>

/**
 *main - function that print data types
 *Return: 0
 */
int main(void)
{
	printf(stderr, "Size of a char: %lu byte(s)\n", sizeof(char));
	printf(stderr, "Size of a int: %lu byte(s)\n", sizeof(int));
	printf(stderr, "Size of a long int: %lu byte(s)\n", sizeof(long int));
	printf(stderr, "Size of a long long int: %lu byte(s)\n",
			sizeof(long long int));
	printf(stderr, "Size of a float: %lu byte(s)\n", sizeof(float));

	return (0);
}