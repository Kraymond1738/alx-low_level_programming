#include "main.h"

int length(char *s);

/**
 * _strcat - the strings are joined
 * @dest: where they are joined
 * @src: String to be joined
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int len;
	int a;

	len = length(dest);
	a = 0;
	while (src[a] != '\0')
	{
		dest[len + j] = src[a];
		a++;
	}
	dest[len + a] = '\0';

	return (dest);
}

/**
 * length - returns length
 * @s: String
 *
 * Return: length of the string
 */
int length(char *s)
{
	int length;
	int i;

	leng = 0;
	i = 0;
	while (s[i] != '\0')
	{
		++leng;
		i++;
	}

	return (leng);
}
