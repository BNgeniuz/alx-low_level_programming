#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 1024

/**
 * __exit - 1024 bytes allocation for a buffer
 *
 * @fdd: input for file description
 * @error: exit or file file discriptor
 * @s: copy from or copy to
 *
 * Return: 0 (malloc to buffer)
 */

int __exit(int error, char *s, int fdd)
{
	switch (error)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file fro & to\n");
			exit(error);
		case 98:
			dprintf(STDERR_FILENO, "Error: can't read from file %s\n", s);
			exit(error);
		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", s);
			exit(error);
		case 100:
			dprintf(STDERR_FILENO, "Error: Can't close fdd %d\n", fdd);
			exit(error);
		default:
			return (0);
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
	int file_from, file_to;
	int r_read, w_write;
	int close_in, close_out;
	char buffer[MAXSIZE];


	/*if arguments are not 3*/
	if (argc != 3)
		__exit(97, NULL, 0);

	/*sets file descriptor for copy from file*/
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		__exit(98, argv[1], 0);

	/*sets file descriptor for copy to file*/
	file_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (file_to == -1)
		__exit(99, argv[2], 0);

	/*reads file_in as long as its not NULL*/
	while ((r_read = read(file_from, buffer, MAXSIZE)) != 0)
	{
		if (r_read == -1)
			__exit(98, argv[1], 0);

		/*copy and write contents to file_to*/
		w_write = write(file_to, buffer, r_read);
		if (w_write == -1)
			__exit(99, argv[2], 0);
	}

	close_in = close(file_from); /*close file_from*/
	if (close_in == -1)
		__exit(100, NULL, file_from);

	close_out = close(file_to); /*close file_to*/
	if (close_out == -1)
		__exit(100, NULL, file_to);

	return (0);
}
