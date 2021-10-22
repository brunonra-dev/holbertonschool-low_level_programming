#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
  * main - program that adds positive numbers.
  *
  * @argc: argument count
  * @argv: argument vector
  * Return: 0 on success;
  */
int main(int argc, char *argv[])
{
	int sum, i, ret;

	i = 1;
	sum = 0;
	ret = 0;

	if (argc <= 1)
		printf("0\n");
	else
	{
		while (i < argc)
		{
			if (atoi(*(argv + i)) > 0)
			{
				sum += atoi(*(argv + i));
			}

			if (atoi(*(argv + i)) == 0)
			{
				ret = 1;
				break;
			}
			i++;
		}

		if (ret == 1)
		{
			printf("Error\n");
			return (ret);
		}
		else
		{
			printf("%d\n", sum);
			return (ret);
		}
	}

	return (ret);
}
