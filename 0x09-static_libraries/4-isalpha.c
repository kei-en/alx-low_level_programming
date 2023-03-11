#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: int to be checked
 *
 * Return: 1 on success
*/
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);

	return (0);
}
