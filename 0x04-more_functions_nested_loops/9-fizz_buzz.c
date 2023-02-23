#include <stdio.h>

/**
 * main - prints numbers from 0 to 100, replacing
 *	  multiples of 3 with "Fizz", multiples of 5 with "Buzz"
 *	  and multiples of both 3 and 5 with "FizzBuzz"
 * Return: 0
*/
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
			printf("FizzBuzz");
		else if ((i % 3) == 0)
			printf("Fizz");
		else if ((i % 5) == 0)
			printf("Buzz");
		else
			printf("%d", i);

		if (i == 100)
			continue;
		printf(" ");
	}

	printf("\n");
	return (0);
}
