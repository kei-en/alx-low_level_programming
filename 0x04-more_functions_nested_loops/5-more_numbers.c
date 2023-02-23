#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 *
 * Return: void
*/
void more_numbers(void)
{
	int r, n;

	for (r = 0; r <= 9; r++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
				_putchar((n / 10) + '0');

			_putchar((n % 10) + '0');
		}

		_putchar('\n');
	}
}
