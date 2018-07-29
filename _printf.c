#include <stdarg.h>
#include <stdlib.h>
#include "holberton.h"

#define MAXSIZE 1024

int _printf(char *format, ...)
{
	int count, i;
	char buf[MAXSIZE];
	va_list ap;

	va_start(ap, format);

	count = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			/* if found, move to format specifier */
			i++;
			count += get_spec_func(&format[i])(ap, buf);
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
	}
	va_end(ap);
	return (count);
}
