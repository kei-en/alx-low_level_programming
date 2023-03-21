#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free dogs
 * @d: struct dog variable
 *
 * Return: void (success)
*/
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
