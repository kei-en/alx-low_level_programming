#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @a: string to be encoded
 *
 * Return: (a)
*/
char *rot13(char *a)
{
	int x, y;
	char s[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char r[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; a[x] != '\0'; x++)
	{
		for (y = 0; s[y] != '\0'; y++)
		{
			if (a[x] == s[y])
			{
				a[x] = r[y];
				break;
			}
		}
	}

	return (a);
}
