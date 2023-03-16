#include "main.h"
#include <stdlib.h>

/**
 * _realloc - rallocates a memory block using malloc and free
 * @ptr: pointer to already allocated memory
 * @old_size: size in bytes of allocated space for ptr
 * @new_size: new size in bytes of the new memory block
 *
 * Return: pointer to reallocated memory block (success), NULL (fail)
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int size;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		p = malloc(new_size);

		if (p == NULL)
			return (NULL);

		return (p);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}

	p = malloc(new_size);

	if (p == NULL)
		return (NULL);

	for (size = 0; size < old_size && size < new_size; size++)
		p[size] = ((char *) ptr)[size];

	free(ptr);
	return (p);
}
