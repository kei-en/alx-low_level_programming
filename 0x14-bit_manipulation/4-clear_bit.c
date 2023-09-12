#include "main.h"

/**
 * clear_bit - sets the vaalue of a bit to 0
 * @n: pointer to the number
 * @index: the index, starting from 0
 *
 * Return: 1 (success), -1 (fail)
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
