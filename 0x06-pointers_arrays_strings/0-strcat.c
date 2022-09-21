#include "main.h"
/**
 * _strcat - concatenates two strings
 *@dest: where the string is going to be written
 *@src: string that are going to be joine
 * Return: Returns a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int len = 0;
	int i = 0;
	int a;

	while (dest[i] != '\0')
	{
		++len;
		i++;
	}

	a = 0;
	while (src[a] != '\0')
	{
		dest[len + a] = src[a];
		a++;
	}
	dest[len + a] = '\0';
	return (dest);
}
