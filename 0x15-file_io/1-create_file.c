#include "main.h"

/**
 * create_file - function that creates a file
 *
 * @filename: file name to be created
 * @text_content: string prt to write file
 *
 * Return: 0 (create)
 */
int create_file(const char *filename, char *text_content)
{
	int word, wrt, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	word = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wrt = write(word, text_content, length);

	if (word == -1 || wrt == -1)
		return (-1);

	close(word);

	return (1);
}
