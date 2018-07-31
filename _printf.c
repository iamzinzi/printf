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
int _printf(const char *format, ...)
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
			else if (format[i] == 's' || format[i] == 'd' ||
				 format[i] == 'i' || format[i] == 'c' ||
				 format[i] == 'r')
			{
				count += get_spec_func(&format[i])(ap);
			}
			else if (format[i] != '\0')
			{
				_putchar('%');
				_putchar(format[i]);
				count += 2;
			}
			else if (format[i] == '\0' && (i - 1) == 0)
			{
				return (-1);
			}
			else
			{
				_putchar('%');
				count++;
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
