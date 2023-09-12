#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: string to be altered
 * @b: character to be added to memory
 * @n: number of characters to be altered
 *
 * Return: s (Success)
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
