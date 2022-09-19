#include "main.h"

int strg_length(char *);

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
	int b;
	char c;

	len = strg_length(s);
	for (a = 0, b = len - 1; !(a >= b); a++, b--)
	{

		
		c = s[a];
		s[a] = s[b];
		s[b] = c;	
	}
}
/**
 * strg_length - counts the length of string
 * @s:sring
 * Return: length of string
 */
int strg_length(char *s)
{
	int i = 0;
	int en = 0;

	while (s[i] != '\0')
	{
		en++;
		i++;
	}
	return (en);
}

