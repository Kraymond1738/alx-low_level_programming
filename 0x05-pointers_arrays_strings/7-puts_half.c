#include "main.h"
/**
 * puts_half - prints half of the string
 * @str: stirng
 * Return: characters half the string
 */
void puts_half(char *str)
{
	int a, b, c, d;

	a = 0;
	b = 0;
	while (str[a] != '\0')
	{
		++b;
		a++;
	}

	if (b % 2 != 0)
	{
		d = (b - 1) / 2;
		c = b - d;
	while (str[c] != '\0')
	{
		_putchar(str[c]);
		c++;
	}
	}
	else
	{
		d = b / 2;
		c = b - d;
		while (str[c] != '\0')
		{
			_putchar(str[c]);
			c++;
		}
	}
	_putchar('\n');
}
