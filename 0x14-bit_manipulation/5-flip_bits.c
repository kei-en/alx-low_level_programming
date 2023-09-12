#include "main.h"

/**
 * flip_bits - finds the number of bits you would need to get
 *	from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: the number of bits needed (success)
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result, nbits = 0;

	result = n ^ m;

	for (; result > 0; result >>= 1)
		nbits += (result & 1);

	return (nbits);
}
