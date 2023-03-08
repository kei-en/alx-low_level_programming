#include "main.h"

int find_prime(int x, int y);

/**
 * is_prime_number - returns 1 if input is a prime number, 0 otherwise
 * @n: number to be checked
 *
 * Return: integer value
*/
int is_prime_number(int n)
{
	return (find_prime(n, 1));
}

/**
 * find_prime - checks if number is prime
 * @x: number to be checked
 * @y: number fo iterations
 *
 * Return: 1 for prime 0 for composite
*/
int find_prime(int x, int y)
{
	if (x <= 1)
		return (0);

	if (x % y == 0 && y > 1)
		return (0);

	if ((x / y) < y)
		return (1);

	return (find_prime(x, y + 1));
}
