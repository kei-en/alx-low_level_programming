#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: a type of dog
 *
 * Return: void (success)
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	if (d->age < 0.0f)
		printf("Age: (nil)");
	else
		printf("Age: %.6f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: (nil)");
	else
		printf("Owner: %s\n", d->owner);
}
