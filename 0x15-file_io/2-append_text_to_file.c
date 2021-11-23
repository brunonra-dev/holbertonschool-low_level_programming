#include "main.h"
#include <string.h>

/**
 * append_text_to_file - appends text at the end of a file
 *
 * @filename: pointer to file
 * @text_content: text to file
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int wf, file;

	if (!filename)
		return (-1);

	if (!text_content)
		return (-1);

	file = open(filename, O_APPEND | O_WRONLY);
	if (file == -1)
		return (-1);

	wf = write(file, text_content, strlen(text_content));
	if (wf == -1)
		return (-1);

	close(file);
	return (1);
}
