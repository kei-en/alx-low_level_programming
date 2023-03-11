#include <stdlib.h>
#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to be searched
 * @needle: string to search for
 *
 * Return: haystack (Success)
*/
char *_strstr(char *haystack, char *needle)
{
	int i, s;

	for (s = 0; needle[s] != '\0'; s++)
		;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (i != s)
			haystack++;
		else
			return (haystack);
	}

	return (NULL);
}
