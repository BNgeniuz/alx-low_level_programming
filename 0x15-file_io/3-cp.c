#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * error - checks if files can be read
 * @file_in: first input to read file from.
 * @file_out: copy file to
 * @argv: arguments vector.
 * Return: 0 (no return)
 */

void error(int file_in, int file_out, char *argv[])
{
	if (file_in == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_out == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}


/**
 * main - file contents to be copy to another file
 * @argc: number of arguments available
 * @argv: arguments vector available to program
 *
 * Return: 0 (copying)
 */

int main(int argc, char *argv[])
{
	int file_in, file_out, file_close;
	ssize_t nchars, nwr;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_in = open(argv[1], O_RDONLY);
	file_out = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error(file_in, file_out, argv);

	nchars = 1024;
	while (nchars == 1024)
	{
		nchars = read(file_in, buffer, 1024);
		if (nchars == -1)
			error(-1, 0, argv);
		nwr = write(file_out, buffer, nchars);
		if (nwr == -1)
			error(0, -1, argv);
	}

	file_close = close(file_in);
	if (file_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_in);
		exit(100);
	}

	file_close = close(file_out);
	if (file_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_in);
		exit(100);
	}
	return (0);
}
