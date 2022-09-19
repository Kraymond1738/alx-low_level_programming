#include "main.h"
int length_string(char *);
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
	int strg_leg;

	strg_leg = length_string(s);
	for (a = strg_leg - 1; a >= 0; a--)
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

int length_string(char *s)
{
	int strg_leg = 0;
	int c = 0;

	while (s[c] != '\0')
	{
		++strg_leg;
		c++;
	}
	return (strg_leg);
}
