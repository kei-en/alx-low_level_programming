#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: first element of array
 * @max: last element of array
 *
 * Return: pointer to the new array (success), NULL (fail)
*/
int *array_range(int min, int max)
{
	int *arr, length, i;

	if (min > max)
		return (NULL);

	length = max - min + 1;

	arr = malloc(sizeof(int) * length);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		arr[i] = min++;

	return (arr);
}
