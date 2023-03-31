#include <stdio.h>

void __attribute__((constructor)) therace(void);

/**
 * first - prints a string before the main function is executed
 *
 * Return: void (success)
*/
void first(void)
{
	printf("You're beat! and yet, you must allow, \n"
		"I bore my house upon my back!\n");
}
