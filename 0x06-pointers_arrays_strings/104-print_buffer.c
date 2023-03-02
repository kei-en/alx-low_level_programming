#include <stdio.h>
#include "main.h"

/**
 * print_buffer - prints a buffer
 * @b: buffer to print
 * @size: size of the buffer
 *
 * Return: void
*/
void print_buffer(char *b, int size)
{
	int i, j;

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);

		for (j = 0; j < 10; j++)
		{
			if ((j + i) >= size)
				printf("  ");

			else
				printf("%02x", *(b + j + i));

			if ((j % 2) != 0 && j != 0)
				printf(" ");
		}

		for (j = 0; j < 10; j++)
		{
			if ((j + i) >= size)
				break;

			else if (*(b + j + i) >= 31 &&
				 *(b + j + i) <= 126)
				printf("%c", *(b + j + i));

			else
				printf(".");
		}

		if (i >= size)
			continue;

		printf("\n");
	}

	if (size <= 0)
		printf("\n");
}
