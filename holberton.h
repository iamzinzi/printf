#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

/**
 * struct format_t - format specifier
 * @type: format specifier
 * @func: output function to be used on matching type
 */
typedef struct format_t
{
	char *type;
	void (*func)(va_list);
} format_t;

int _putchar(char c);
int _strlen(char *s);

#endif /* _HOLBERTON_H_ */

/*
void print_char(va_list args)
{
	write(1, va_arg(args, char), 1);
}
*/
