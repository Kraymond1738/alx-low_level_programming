#include "main.h"

int length(char *s);

/**
 * _strcat - Concatenate two strings
 * @dest: Target of concatenation
 * @src: String to be concatenated
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int len;
	int a;

	len = length(dest);
	j = 0;
	while (src[j] != '\0')
	{
		dest[len + j] = src[j];
		j++;
	}
	dest[len + j] = '\0';

	return (dest);
}

/**
 * length - returns the length of a string
 * @s: String whose length we wish to determine
 *
 * Return: Length of string
 */
int length(char *s)
{
	int length;
	int i;

	length = 0;
	i = 0;
	while (s[i] != '\0')
	{
		++length;
		i++;
	}

	return (length);
}
