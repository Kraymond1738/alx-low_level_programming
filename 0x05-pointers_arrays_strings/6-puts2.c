#include "main.h"
/**
 * puts2 - prints characters when divided by 2 give  a remainder 0
 *
 * Return: zero
 */
void puts2(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		if (str[a] % 2 = 0)
		{
			_putchar(str[a]);
		}
		a++;
	}
	putchar('\n');
}
