#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes it with
 *		  a specific char
 * @size: length of array
 * @c: char to be initialized
 *
 * Return: pointer to the array (success), NULL (fail)
*/
char *create_array(unsigned int size, char c)
{
	char *n;
	unsigned int i;

	n = malloc(sizeof(char) * size);

	if (n == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		n[i] = c;

	return (n);
}
