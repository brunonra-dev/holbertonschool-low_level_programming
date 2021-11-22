#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @filename: pointer to file
 * @letters: the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int rp, file;
	char *buffer;

	if (!filename)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	buffer = malloc(letters);
	if (!buffer)
	{
		close(file);
		return (0);
	}

	rp = read(file, buffer, letters);
	if (rp == -1)
	{
		free(buffer);
		close(file);
		return (0);
	}

	rp = write(STDOUT_FILENO, buffer, rp);
	if (rp == -1)
	{
		free(buffer);
		close(file);
		return (0);
	}

	free(buffer);
	close(file);
	return (rp);
}
