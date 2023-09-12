#include "main.h"
/**
 * find_sqrt - calculates the natural square root of a number
 * @x: number to calculate square root of
 * @y: iterate value
 *
 * Return: the natural square root (Success)
*/
int find_sqrt(int x, int y)
{
	int result = y * y;

	if (result > x)
		return (-1);

	if (result == x)
		return (y);

	return (find_sqrt(x, y + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to be get square root of
 *
 * Return: square root (Success)
*/
int _sqrt_recursion(int n)
{
	return (find_sqrt(n, 1));
}
