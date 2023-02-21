#include "main.h"

/**
 * times_table - prints the 9 times table starting from 0
 * c=columns, r=rows, p=product, o=ones, t=tens
 * Return: void
*/
void times_table(void)
{
	int c, r, p, o, t;

	for (r = 0; r <= 9; r++)
	{
		for (c = 0; c <= 9; c++)
		{
			p = r * c;

			if (p < 10)
			{
				if (c > 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(p + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				t = p % 10;
				o = p / 10;
				_putchar(o + '0');
				_putchar(t + '0');
			}
		}
		_putchar('\n');
	}
}
