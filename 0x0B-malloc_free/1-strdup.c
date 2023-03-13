#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *	     which contains a copy of the string given as a parameter
 * @str: string to be copied
 *
 * Return: pointer to duplicated string (success), NULL (fail)
*/
char *_strdup(char *str)
{
	char *cpy;
	char *temp;
	int length = 0;

	if (str == NULL)
		return (NULL);

	for ( ; str[length]; length++)
		;

	cpy = malloc(sizeof(char) * (length + 1));
	temp = cpy;

	while (*str)
		*temp++ = *str++;

	*temp = '\0';

	return (cpy);
}
