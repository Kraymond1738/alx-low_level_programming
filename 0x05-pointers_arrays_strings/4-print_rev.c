#include "main.h"
/**
 * print_rev - prints a string in reverse folowed by a new line
 *
 *@s: string
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	int a = 0;

	strg_leg = length_string(s);
	for (a = length - 1; a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}

/**
 * length_string - calculates for the string
 *
 * @s: string
 *
 * Return: string length
 */

void  length_string(char *s)
{
	int b = 0;
	int c = 0;

	while (s[c] != '\0')
	{
		b++;
		c++;
		return (b);
	}
}
