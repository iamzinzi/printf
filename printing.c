#include <unistd.h>
#include "holberton.h"


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
 * @buf: buffer to store character
 *
 * Return: num of characters printed (always 1)
 */
int print_char(va_list ap, char *buf)
{
	int c;
	(void)buf;

	c = va_arg(ap, int);

	write(1, &c, 1);
	return (1);
}

/**
 * print_string - print a string to stdout
 * @ap: va_list containing variadic arguments
 * @buf: buffer to store string
 *
 * Return: num of characters printed
 */
int print_string(va_list ap, char *buf)
{
	int i;
	char *s;
	(void)buf;

	s = va_arg(ap, char *);

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	return (i);
}

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
