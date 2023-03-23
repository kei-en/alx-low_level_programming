#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
 * struct listing - struct type defining a listing
 * @tag: a atg representing data tyoe
 * @print: function pointer to a function that prints data type
 * corresponding to tag
*/
typedef struct listing
{
	char *tag;
	void (*print)(va_list argp);

} list_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
