#include <stdio.h>
/**
  * main - prints it's name, followed by a new line.
  *
  * @argc: argument count
  * @argv: argument vector
  * Return: 0 on success;
  */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
