#include <stdio.h>
#include <stdlib.h>
/**
  * main - program that adds positive numbers.
  *
  * @argc: argument count
  * @argv: argument vector
  * Return: 0 on success;
  */
int main(int argc, char *argv[])
{
	int sum, i;

	sum = 0;

	i = 1;

	while (i < argc)
	{
		if (atoi(argv[i]) == 0 && argv[i] != 0)
		{
			printf("Error\n");
			sum = -1;
			break;
		}
		else if (atoi(argv[i]) < 0)
		{
			continue;
		}
		else
		{
			sum += atoi(argv[i]);
		}
		i++;
	}

	if (sum >= 0)
		printf("%d\n", sum);

	return (0);
}
