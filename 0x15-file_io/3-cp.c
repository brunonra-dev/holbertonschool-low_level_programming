#include "main.h"
void close_file(int file);

/**
 * main - copies the content of a file to another file
 *
 * @ac: argument count
 * @av: arguments
 *
 * Return: Always 0.
 */

int main(int ac, char **av)
{
	int rp, file_from, file_to;
	char buffer[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(av[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	file_to = open(av[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (file_to == -1)
	{
		close_file(file_from);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	while (rp)
	{
		rp = read(file_from, buffer, 1024);
		if (rp == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
		rp = write(file_to, buffer, rp);
		if (rp == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
	close_file(file_from);
	close_file(file_to);
	return (0);
}

/**
 * close_file - close file
 *
 * @file: file
 */

void close_file(int file)
{
	int cf;

	cf = close(file);

	if (cf == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", file);
		exit(100);
	}
}
