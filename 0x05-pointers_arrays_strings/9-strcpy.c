#include "main.h"
/**
 * _strcpy - copies a string to another loocation
 *@dest: destinaton of thestring
 *@src: where the string is copied
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	a = 0;
	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	if (src[a] == '\0')
	{
		dest[a] = '\0';
	}
	return (dest);
}
