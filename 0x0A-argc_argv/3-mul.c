#include <stdio.h>
#include <stdlib.h>
/**
  * main - program that multiplies two numbers.
  *
  * @argc: argument count
  * @argv: argument vector
  * Return: 0 on success;
  */
int main(int argc, char *argv[])
{
	if (argc <= 2)
		printf("Error\n");
	else
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
