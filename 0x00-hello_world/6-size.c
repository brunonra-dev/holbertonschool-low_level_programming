#include <stdio.h>

/**
 *main - function that print data types
 *Return: 0
 */
int main(void)
{
	printf(stdout, "Size of a char: %lu byte(s)\n", sizeof(char));
	printf(stdout, "Size of a int: %lu byte(s)\n", sizeof(int));
	printf(stdout, "Size of a long int: %lu byte(s)\n", sizeof(long int));
	printf(stdout, "Size of a long long int: %lu byte(s)\n",
			sizeof(long long int));
	printf(stdout, "Size of a float: %lu byte(s)\n", sizeof(float));

	return (0);
}
