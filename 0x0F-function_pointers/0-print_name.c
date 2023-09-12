#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: string of characters for name
 * @f: pointer to a function with one argument and void return
 *
 * Return: void (success)
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
