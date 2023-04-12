#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *_buffer(char *file);
void close_file(int fdesc);

/**
 * _buffer - provides a buffer with 1024 bytes
 * @file: name of the file buffer
 *
 * Return: pointer to the new buffer (success)
*/
char *_buffer(char *file)
{
	char *buffer = malloc(sizeof(char) * 1024);

	if (!buffer)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
				file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - terminates file descriptors
 * @fdesc: file descriptor to be closed
 *
 * Return: void (success)
*/
void close_file(int fdesc)
{
	int cls;

	cls = close(fdesc);

	if (cls == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdesc);
		exit(100);
	}
}

/**
 * main - copies content of one file to another file
 * @argc: number of arguments given to the program
 * @argv: array of pointers to the arguments
 *
 * Return: 0 (success)
*/
int main(int argc, char *argv[])
{
	int from, to, rd, wr;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_t\n");
		exit(97);
	}

	buffer = _buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	rd = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		wr = write(to, buffer, rd);
		if (to == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		rd = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (rd > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
