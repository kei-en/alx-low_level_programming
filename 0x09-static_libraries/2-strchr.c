#include <stdlib.h>
#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to be checked
 * @c: character to be located
 *
 * Return: c (Success)
*/
char *_strchr(char *s, char c)
{
	while (*s != c && *s != '\0')
		s++;

	if (*s == c)
		return (s);
	else
		return (NULL);
}
