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

int _printf(char *format, ...);
int print_char(va_list, char *buf);
int print_string(va_list ap, char *buf);
int print_number(va_list ap, char *buf);
int _putchar(char c);
int _strlen(char *s);
int (*get_spec_func(char *s))(va_list ap, char *buf);

#endif /* _HOLBERTON_H_ */
