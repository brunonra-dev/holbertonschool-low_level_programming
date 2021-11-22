#include "main.h"
#include <string.h>

/**
 * create_file - creates a file
 *
 * @filename: file name
 * @text_content: text to file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int wf, file;

	if (!filename)
		return (-1);

	file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
		return (-1);

	if (!text_content)
		return (1);

	wf = write(file, text_content, strlen(text_content));
	if (wf == -1)
	{
		close(file);
		return (-1);
	}

	close(file);
	return (1);
}
