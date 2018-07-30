#include <unistd.h>
#include "holberton.h"

int print_char(va_list ap, char *buf)
{
	(void)buf;
	int c = va_arg(ap, int);
<<<<<<< HEAD
        write(1, &c, 1);
=======
	write(1, &c, 1);
>>>>>>> 57d9c3df9574ac1def5df8d51f72071c6b5fa7cd
	return (1);
}
