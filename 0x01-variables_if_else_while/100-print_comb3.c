#include <stdio.h>

/**
 * main - prints all possible combinations of two digits
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int n, i;

	for (n = 0; n <= 9; n++)
	{
		for (i = n + 1; i < 10; i++)
		{
			putchar((n % 10) + '0');
			putchar((i % 10) + '0');

			if (n == 8 && i == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
