#include "main.h"

/**
 * _strcpy - copies string pointed to by src, including \0
 *	     to the buffer pointed to by dest
 * @dest: buffer to be copied to
 * @src: string to be copied
 *
 * Return: the pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	int length, i;

	for (length = 0; src[length] != '\0'; length++)
		;

	for (i = 0; i < length; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}
