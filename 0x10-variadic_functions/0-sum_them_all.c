#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - finds the sum of all its parameters
 * @n: number of arguments
 *
 * Return: sum (success)
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum = 0;

	va_start(args, n);

	for (i = 0; i < n; i++)

	{
		int x = va_arg(args, int);

		sum += x;

		if (n == 0)
			return (0);
	}

	va_end(args);

	return (sum);
}
