#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: string to write to the file
 *
 * Return: 1 (success), -1 (fail)
*/
int create_file(const char *filename, char *text_content)
{
	int opn, wr, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length]; length++)
			;
	}

	opn = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(opn, text_content, length);

	if (opn == -1 || wr == -1)
		return (-1);

	close(opn);

	return (1);
}
