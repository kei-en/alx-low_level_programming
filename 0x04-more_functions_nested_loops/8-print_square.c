#include "main.h"

/**
 * print_square - prints a square
 * @size: square extent
 *
 * Return: void
*/
void print_square(int size)
{
	int square, hash;

	if (size > 0)
	{
		for (square = 0; square < size; square++)
		{
			for (hash = 0; hash < size; hash++)
				_putchar('#');

			if (square == size - 1)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
