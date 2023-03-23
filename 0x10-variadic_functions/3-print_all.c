#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

void p_char(va_list argp);
void p_int(va_list argp);
void p_float(va_list argp);
void p_string(va_list argp);
void print_all(const char * const format, ...);
/**
 * p_char - prints a character
 * @argp: list of arguments pointing to the character
 *
 * Return: void (success)
*/
void p_char(va_list argp)
{
	char c;

	c = va_arg(argp, int);
	printf("%c", c);
}

/**
 * p_int - prints an integer
 * @argp: list of arguments pointing to the integer
 *
 * Return: void (success)
*/
void p_int(va_list argp)
{
	int i;

	i = va_arg(argp, int);
	printf("%d", i);
}

/**
 * p_float - prints a float variable
 * @argp: list of arguments pointing to the float
 *
 * Return: void (success)
*/
void p_float(va_list argp)
{
	float f;

	f = va_arg(argp, double);
	printf("%f", f);
}

/**
 * p_string - prints a string
 * @argp: list of arguments pointing to the string
 *
 * Return: void (success)
*/
void p_string(va_list argp)
{
	char *s;

	s = va_arg(argp, char *);
	printf("%s", s);
}

/**
 * print_all - prints anything passed to it
 * @format: list of types of arguments passed to the function
 *
 * Return: void (success)
*/
void print_all(const char * const format, ...)
{
	va_list args;
	int i, j;
	char *separator = "";
	list_t functions[] = {
		{"c", p_char},
		{"i", p_int},
		{"f", p_float},
		{"s", p_string}
	};

	i = 0;

	va_start(args, format);

	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(functions[j].tag)))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			functions[j].print(args);
			separator = ", ";
		}

		i++;
	}

	printf("\n");

	va_end(args);
}
