#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: int to be checked
 *
 * Return: 1 on success
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	return (0);
}
