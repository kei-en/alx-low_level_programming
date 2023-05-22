#include "main.h"

/**
 * _strncat - concatenates two string up to n bytes
 * @dest: destination of string
 * @src: string to be appended
 * @n: number of bytes to be appended
 *
 * Return: (dest)
*/
char *_strncat(char *dest, char *src, int n)
{
	int length, i;

	for (length = 0; dest[length] != '\0'; length++)
		;

	for (i = 0; src[i] != '\0' && i < n; ++i, ++length)
		dest[length] = src[i];

	dest[length] = '\0';

	return (dest);
}
