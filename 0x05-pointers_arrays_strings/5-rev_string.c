#include "main.h"
/**
 * rev_string - a functin that reverses a string
 * @s: string
 *
 * Return: reversed string to stdou
 */

void rev_string(char *s)
{
	int len;
	int a;

	len = strg_length(s);
	for (a = len - 1; a >= 0; a--)
	{
		_putchar(s[a]);
	}
}
/**
 * strg_length - counts the length of string
 * @s:sring
 * Return: length of string
 */
int strg_length(char s)
{
	int i = 0;
	int en = 0;

	while (s[i] != '\0')
	{
		en++;
		i++;
		return (en);
	}
}

