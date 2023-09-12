#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the opcodes of itself
 * @argc: number of arguments
 * @argv: array of pointers to the arguments
 *
 * Return: 0 (success)
*/
int main(int argc, char *argv[])
{
	int i, j;
	int (*a)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	i = atoi(argv[1]);

	if (i < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (j = 0; j < i; j++)
	{
		opcode = *(unsigned char *)a;
		printf("%.2x", opcode);

		if (j == i - 1)
			continue;
		printf(" ");

		a++;
	}

	printf("\n");

	return (0);
}
