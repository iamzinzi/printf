#include <stdlib.h>
#include <stdarg.h>
#include "holberton.h"

int (*get_spec_func(char *s))(va_list ap, char *buf)
{
	format_t formats[] = {
		{"c", print_char},
		{"s", print_string},
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
