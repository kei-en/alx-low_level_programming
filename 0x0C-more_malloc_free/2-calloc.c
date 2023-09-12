#include "main.h"
#include <stdlib.h>

char *_memset(char *s, char b, unsigned int n);

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements of array'
 * @size: size of element
 *
 * Return: pointer to allocated memory (success), NULL (fail)
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int snb;

	if (nmemb == 0 || size == 0)
		return (NULL);

	snb = nmemb * size;

	ptr = malloc(snb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, snb);
	return (ptr);
}

/**
 * _memset - fills memory with a constant byte
 * @s: string to be altered
 * @b: character to be added to memory
 * @n: number of characters to be altered
 *
 * Return: s (success)
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
