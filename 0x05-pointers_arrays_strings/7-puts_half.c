#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string to be checked
 *
 * Return: void
*/
void puts_half(char *str)
{
	int length, i, j;

	for (length = 0; str[length] != '\0'; length++)
		;

	if (length % 2 == 0)
	{
		for (i = length / 2; str[i] != '\0'; i++)
			_putchar(str[i]);
	}
	else if (length % 2)
	{
		for (j = (length - 1) / 2; j < length - 1; j++)
			_putchar(str[j + 1]);
	}
	_putchar('\n');
}
