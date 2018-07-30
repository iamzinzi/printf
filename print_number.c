#include "holberton.h"

/**
 * print_number - print number
 * @ap: va_list containing variadic arguments
 *
 * Return: number of characters printed
 */
int print_number(va_list ap)
{
	int num, n, length, exp;

	num = va_arg(ap, int);
	length = 0;
	if (num < 0)
	{
		length++;
		_putchar('-');
		num *= -1;
	}

	n = num;
	exp = 1;
	while (n > 9)
	{
		exp *= 10;
		n /= 10;
	}

	while (exp)
	{
		_putchar(num / exp + '0');
		num = num % exp;
		exp /= 10;
		length++;
	}

	return (length);
}
