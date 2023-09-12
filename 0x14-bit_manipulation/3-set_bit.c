#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at given index
 * @n: pointer to the number
 * @index: the index, starting from 0
 *
 * Return: 1 (success), -1 (fail)
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
