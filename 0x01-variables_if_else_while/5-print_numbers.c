#include <stdio.h>

/**
 * main - prints single digit numbers of base 10
 *
 *Return: Always 0
*/
int main(void)
{
	char l;

	for (l = '0'; l <= '9'; l++)
		putchar(l);

	putchar('\n');
	return (0);
}
