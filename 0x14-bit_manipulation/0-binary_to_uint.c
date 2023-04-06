#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number (success),
 *	0 (if one or more characters is not 0 or 1, b is NULL)
*/
unsigned int binary_to_uint(const char *b)
{
	int length;
	unsigned int base2 = 1, result = 0;

	if (!b)
		return (0);

	for (length = 0; b[length]; length++)
		;

	for (length -= 1; length >= 0; length--)
	{
		if (b[length] != '0' && b[length] != '1')
			return (0);

		result += (b[length] - '0') * base2;
		base2 *= 2;
	}

	return (result);
}
