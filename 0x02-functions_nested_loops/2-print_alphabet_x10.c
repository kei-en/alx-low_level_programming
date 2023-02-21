#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 * Return: void
*/
void print_alphabet_x10(void)
{
	int n;
	char a;

	for (n = 0; n < 10; n++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}

		_putchar('\n');
	}
}
