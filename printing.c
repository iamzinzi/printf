#include <unistd.h>
#include "holberton.h"

/**
 * _strlen - find the length of a string
 * @s: string to be parsed
 *
 * Return: num of characters in string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_char - print a character to stdout
 * @ap: va_list containing variadic arguments
 *
 * Return: num of characters printed (always 1)
 */
int print_char(va_list ap)
{
	int c;

	c = va_arg(ap, int);
	write(1, &c, 1);
	return (1);
}

/**
 * print_string - print a string to stdout
 * @ap: va_list containing variadic arguments
 *
 * Return: num of characters printed
 */
int print_string(va_list ap)
{
	int i;
	char *s;

	s = va_arg(ap, char *);

	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	return (i);
}

/**
 * print_reverse - print a string in reverse to stdout
 * @ap: va_list containing variadic arguments
 *
 * Return: num of characters printed
 */
int print_reverse(va_list ap)
{
	int i, len;
	char *s;

	s = va_arg(ap, char *);

	if (s == NULL)
		s = "(null)";
	len = _strlen(s);

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	return (len);
}
