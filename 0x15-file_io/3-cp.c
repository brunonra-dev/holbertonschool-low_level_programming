#include "main.h"

/**
 * main - check the code
 *
 * @ac: argument count
 * @av: arguments
 *
 * Return: Always 0.
 */

int main(int ac, char **av)
{
	int rp, cf, file_from, file_to;
	char buffer[1024];

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(av[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	file_to = open(av[2], O_RDWR | O_CREAT | O_TRUNC, 0664);

	rp = read(file_from, buffer, 1024);

	rp = write(file_to, buffer, rp);
	if (rp == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}

	cf = close(file_from);
	if (cf == -1)
	{
		dprintf(2, "Error: Can't close fd %i\n", file_from);
		exit(100);
	}
	cf = close(file_to);
	if (cf == -1)
	{
		dprintf(2, "Error: Can't close fd %i\n", file_to);
		exit(100);
	}
	return (0);
}
