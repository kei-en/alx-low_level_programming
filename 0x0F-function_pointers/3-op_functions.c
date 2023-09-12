#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - adds two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: sum (success)
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - finds the difference between two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: difference (success)
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - mutliplies two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: multiplication (success)
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: division (success)
*/
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - finds the remainder of division of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: remainder (success)
*/
int op_mod(int a, int b)
{
	return (a % b);
}
