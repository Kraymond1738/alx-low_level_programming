#include "main.h"
/**
 * puts2 - prints characters when divided by 2 give  a remainder 0
 *@str: string
 * Return: zero
 */
void puts2(char *str)
{
	int a = 0;
	int b = 1;

	while (str[a] != '\0')
	{
		if (b % 2 != 0)
		{
			_putchar(str[a]);
		}
		b++;
		a++;
	}
	_putchar('\n');
}
