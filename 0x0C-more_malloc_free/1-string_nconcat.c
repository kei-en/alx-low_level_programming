#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: length of second string
 *
 * Return: pointer to concatenated string (success), NULL (fail)
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *con;
	unsigned int i, length = n;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		length++;

	con = malloc(sizeof(char) * (length + 1));

	if (con == NULL)
		return (NULL);

	length = 0;

	for (i = 0; s1[i]; i++)
		con[length++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		con[length++] = s2[i];

	con[length] = '\0';

	return (con);
}
