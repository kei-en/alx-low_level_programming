#include "main.h"

/**
 * factorial - returns the factorial of agiven number
 * @n: given number
 *
 * Return: factorial (Success)
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
