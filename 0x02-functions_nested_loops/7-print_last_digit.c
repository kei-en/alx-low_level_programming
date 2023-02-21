#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @l: integer to be checked
 *
 * Return: 0
*/
int print_last_digit(int l)
{
	l = l % 10;

	if (l < 0)
		l = l * -1;

	_putchar(l + '0');

	return (l);
}
