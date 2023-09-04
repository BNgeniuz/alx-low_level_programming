#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 *
 * @filename: file name to be appended
 * @text_content: string ptr to the end of a file
 *
 * Return: 0 (write to edit)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int original, wrt, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	original = open(filename, O_WRONLY | O_APPEND);
	wrt = write(original, text_content, length);

	if (original == -1 || wrt == -1)
		return (-1);

	close(original);

	return (1);
}
