#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include <stdarg.h>

/**
 * struct format_t - format specifier
 * @type: format specifier
 * @func: output function to be used on matching type
 */
typedef struct format_t
{
	char *type;
	int (*func)(va_list, char *);
} format_t;

int _putchar(char c);
int _printf(char *format, ...);
int print_char(va_list, char *);
int (*get_spec_func(char *s))(va_list ap, char *buffer);

#endif /* _HOLBERTON_H_ */

/*
void print_char(va_list args)
{
	write(1, va_arg(args, char), 1);
}
*/
