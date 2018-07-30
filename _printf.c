#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include "holberton.h"

/**
 * _printf - prints output according to the format specified.
 * @format: character string containing format specifiers,
 * which causes printing of the next successive argument.
 *
 * Return: The number of chacters printed. Return -1 on error.
 */
int _printf(char *format, ...)
{
	int count, i;
	va_list ap;

	if (format == NULL)
		return (-1);

	va_start(ap, format);

	count = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			/* if found '%', move to format specifier */
			i++;
			if (format[i] == '%')
			{
				_putchar('%');
				count++;
			}
			else
			{
				count += get_spec_func(&format[i])(ap);
			}

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
