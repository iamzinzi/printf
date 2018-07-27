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
