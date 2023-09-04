#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - function that reads a text file and
 * prints it to the POSIX standard output
 *
 * @filename: file name to input
 * @letters: input letter to read
 *
 * Return: 0 (read only)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *word;
	ssize_t idx;
	ssize_t wrt;
	ssize_t txt;

	idx = open(filename, O_RDONLY);
	if (idx == -1)
		return (0);
	word = malloc(sizeof(char) * letters);
	txt = read(idx, word, letters);
	wrt = write(STDOUT_FILENO, word, txt);

	free(word);
	close(idx);
	return (wrt);
}
