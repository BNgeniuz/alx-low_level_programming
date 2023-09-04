#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int word);

/**
 * create_buffer - 1024 bytes allocation for a buffer
 *
 * @file: input buffer for char storing
 *
 * Return: 0 (malloc to buffer)
 */
char *create_buffer(char *file)
{
	char *bumper;

	bumper = malloc(sizeof(char) * 1024);

	if (bumper == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (bumper);
}


/**
 * close_file - file closes index
 * @word: input ptr closed.
 */
void close_file(int word)
{
	int v;

	v = close(word);

	if (v == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close word %d\n", word);
		exit(100);
	}
}


/**
 * main - file contents to copy to another file
 *
 * @argc: args available to the program.
 * @argv: array ptrs to input arguments.
 *
 * Return: 0 (content copying)
 *
 * Description: If incorrect - exit code with 97.
 * If not exist or cannot be read - exit code with 98.
 * If cannot be created or written to - exit code with 99.
 * If cannot be closed - exit code with 100.
 */
int main(int argc, char *argv[])
{
	int from, to, rd, word;
	char *bumper;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	bumper = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	rd = read(from, bumper, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(bumper);
			exit(98);
		}

		word = write(to, bumper, rd);
		if (to == -1 || word == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(bumper);
			exit(99);
		}

		rd = read(from, bumper, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (rd > 0);

	free(bumper);
	close_file(from);
	close_file(to);

	return (0);
}
