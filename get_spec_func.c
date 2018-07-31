#include <stdlib.h>
#include <stdarg.h>
#include "holberton.h"
/**
 * get_spec_func - matches incoming character to an array of structs.
 * If a successful match is found, the matching function is returned.
 * @s: The incoming character to be matched.
 *
 * Return: pointer to a function corresponding to format specifier provided
 * as parameter.
 */
int (*get_spec_func(const char *s))(va_list ap)
{
	format_t formats[] = {
		{"c", print_char},
		{"s", print_string},
		{"d", print_number},
		{"i", print_number},
		{"r", print_reverse},
		{NULL, NULL}
	};

	int i;

	for (i = 0; formats[i].type != NULL; i++)
	{
		if (*s == *formats[i].type)
			return (formats[i].func);
	}
	exit(1);
}
