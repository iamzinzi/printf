#include <stdarg.h>
<<<<<<< HEAD
#include <unistd.h>
=======
#include <stdlib.h>
>>>>>>> 57d9c3df9574ac1def5df8d51f72071c6b5fa7cd
#include "holberton.h"

#define MAXSIZE 1024

int _printf(char *format, ...)
{
	int count, i;
	char buf[MAXSIZE];
	va_list ap;

	va_start(ap, format);

<<<<<<< HEAD
=======
	count = 0;
>>>>>>> 57d9c3df9574ac1def5df8d51f72071c6b5fa7cd
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
<<<<<<< HEAD
			/* if found '%', move to format specifier */
			i++;
			get_spec_func(&format[i])(ap, buf);

=======
			/* if found, move to format specifier */
			i++;
			count += get_spec_func(&format[i])(ap, buf);
>>>>>>> 57d9c3df9574ac1def5df8d51f72071c6b5fa7cd
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
