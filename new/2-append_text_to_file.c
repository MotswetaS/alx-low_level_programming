#include "main.h"

/**
 * append_text_to_file - we are appending a text at the end of a file.
 * @filename: it is a pointer to the name of the file.
 * @text_content: it is the string that we add at the end of the file
 *
 * Return: returns 1 for success or -1 fo failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}




