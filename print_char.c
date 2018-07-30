#include <unistd.h>
#include "holberton.h"

int print_char(va_list ap, char *buf)
{
	int c;
	(void)buf;

	c = va_arg(ap, int);

	write(1, &c, 1);
	return (1);
}
