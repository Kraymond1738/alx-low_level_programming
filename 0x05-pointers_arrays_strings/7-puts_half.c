#include "main.h"
/**
 * puts_half - prints half of the string
 * @str: stirng
 * Return: characters half the string
 */
void puts_half(char *str);
{
	int a, b, c, d;

	a = 0;
	b = 0;
	for (str[a] != '\0'; a >= 0; a++);
	b++;	
	
	c = ((b - 1) / 2);
	while (d = c && d <= b)
	{
		_putchar(str[d]);
		d++;
	}
}
