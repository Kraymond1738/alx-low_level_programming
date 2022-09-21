#include "main.h"
/**
 * _strncpy - join strings
 * @dest: dest
 * @src: string.
 * @b: space needed
 * Return: returns the pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest)
}
