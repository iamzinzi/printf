#include "holberton.h"

/**
 * print_number - print number
 * @ap: va_list containing variadic arguments
 *
 * Return: number of characters printed
 */
int print_number(va_list ap)
{
	int num, length, exp;
	unsigned int n, n_storage;

	num = va_arg(ap, int);
	length = 0;
	n_storage = 0;
	if (num < 0)
	{
		length++;
		_putchar('-');
		n = num * -1;
	}
	else
	{
		n = num;
	}

	exp = 1;
	n_storage = n;
	while (n > 9)
	{
		exp *= 10;
		n /= 10;
	}

	n = n_storage;
	while (exp)
	{
		_putchar(n / exp + '0');
		n = n % exp;
		exp /= 10;
		length++;
	}

	return (length);
}
