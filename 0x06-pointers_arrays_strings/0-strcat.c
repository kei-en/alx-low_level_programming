#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: destination of appended string
 * @src: string to be appended
 *
 * Return: pointer to resulting string
*/
char *_strcat(char *dest, char *src)
{
	int length, i;

	for (length = 0; dest[length] != '\0'; length++)
		;

	for (i = 0; src[i] != '\0'; ++i, ++length)
		dest[length] = src[i];

	dest[length] = '\0';

	return (dest);
}
