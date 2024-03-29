#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type dog
 * @d: variable of type dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: void (success)
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
