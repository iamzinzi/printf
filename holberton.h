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
	int (*func)(va_list);
} format_t;

int _printf(const char *format, ...);
int print_char(va_list);
int print_string(va_list ap);
int print_number(va_list ap);
int print_reverse(va_list ap);
int _putchar(char c);
int _strlen(char *s);
int (*get_spec_func(const char *s))(va_list ap);

#endif /* _HOLBERTON_H_ */
