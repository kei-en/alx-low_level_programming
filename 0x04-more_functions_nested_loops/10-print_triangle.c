#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: extent of triangle
 *
 * Return: void
*/
void print_triangle(int size)
{
	int i, t, h;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (t = 1; t <= size - i; t++)
				_putchar(' ');

			for (h = 1; h <= i; h++)
				_putchar('#');

			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
