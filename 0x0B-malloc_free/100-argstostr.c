#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: pointer to new string (success), NULL (fail)
*/
char *argstostr(int ac, char **av)
{
	char *new_arr;
	int i, j;
	int k = 0, length = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			length++;
	}

	new_arr = malloc(sizeof(char) * length + 1);

	if (new_arr == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			new_arr[k++] = av[i][j];

		new_arr[k++] = '\n';
	}

	new_arr[length] = '\0';

	return (new_arr);
}
