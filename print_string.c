#include <unistd.h>
#include "holberton.h"

int print_string(va_list ap, char *buf)
{
	int i;
	char *s;
	(void)buf;

	s =va_arg(ap, char *);

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	return (i);
}
