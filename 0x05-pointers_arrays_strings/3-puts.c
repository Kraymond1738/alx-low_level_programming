#include "main.h"
/**
 * _puts - prints a string of characters followed by a new line
 *
 * @str: string
 *
 * Return: returns the string
 */
void _puts(char *str)
{
	int a = 0;

	while (str[i] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
