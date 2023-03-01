#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: string to be encoded
 *
 * Return: str
*/
char *leet(char *str)
{
	int i, k;
	char s[] = "aAeEoOtTlL";
	char l[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (k = 0; k <= 9; k++)
		{
			if (s[k] == str[i])
				str[i] = l[k];
		}
	}

	return (str);
}
