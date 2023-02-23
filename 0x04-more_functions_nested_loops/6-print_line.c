#include "main.h"

/**
 * print_line - draws a line in the terminal
 * @n: number of lines
 *
 * Return: void
*/
void print_line(int n)
{
	int line;

	if (n > 0)
	{
		for (line = 0; line <= n; line++)
			_putchar('_');
	}
	_putchar('\n');
}
