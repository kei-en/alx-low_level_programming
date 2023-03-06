#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be checked
 * @accept: string to be compared
 *
 * Return: number of bytes both in accept and c
*/
unsigned int _strspn(char *s, char *accept)
{
	int i, j, count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
					count++;
			}
		}
		else
			return (count);
	}

	return (count);
}
