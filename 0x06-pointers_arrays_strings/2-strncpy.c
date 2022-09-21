#include "main.h"
/**
 * _strcmp - copies two strings
 * @s1: string 1
 * @s2: string 2
 * Return: zero
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int a = 0;

	while (a == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;
		a = *(s1 + i) - *(s2 + i);
		i++;
	}

	return (a);
}
