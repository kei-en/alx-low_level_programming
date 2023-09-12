#include "main.h"

/**
 * rev_string - reverses string
 * @s: string to be reversed
 *
 * Return: void
*/
void rev_string(char *s)
{
	int length, i, j;
	char temp;

	for (length = 0; s[length] != '\0'; length++)
		;

	j = length - 1;

	for (i = 0; i < length / 2; i++)
	{
		temp = s[i];
		s[i] = s[j];
		s[j--] = temp;
	}
}
