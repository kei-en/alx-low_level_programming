#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: pointer to concatenated string (success), NULL (fail)
*/
char *str_concat(char *s1, char *s2)
{
	int s1_len, s2_len, i;
	int size = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (s1_len = 0; s1[s1_len]; s1_len++)
		;
	for (s2_len = 0; s2[s2_len]; s2_len++)
		;

	size = s1_len + s2_len + 1;

	s = malloc(sizeof(char) * size);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
		s[i] = s1[i];

	for (i = 0; i < s2_len; i++)
		s[s1_len + i] = s2[i];

	s[size - 1] = '\0';

	return (s);
}
