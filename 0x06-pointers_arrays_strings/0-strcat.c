#include "main.h"
/**
 * _strcat - joins 2 strings
 * @dest: destination
 * @src: string
 * Return: the pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
	int len = 0;
	int a = 0;

	while (*(dest + len) != '\0')
	{
		len++;
	}

	while (a >= 0)
	{
		*(dest + len) = *(src + a);
		if (*(src + a) == '\0')
			break;
		len++;
		a++;
	}
	return (dest);
}
