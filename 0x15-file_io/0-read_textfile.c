#include "main.h"

/**
 * read_textfile - reads a text file and prints it to POSIX
 * @filename: the name of the file
 * @letters: the number of letters
 *
 * Return: number of letters (success), 0 (fail)
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t opn, rd, wr;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	opn = open(filename, O_RDONLY);
	rd = read(opn, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, rd);

	if (opn == -1 || rd == -1 || wr == -1 || wr != rd)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(opn);

	return (wr);
}
