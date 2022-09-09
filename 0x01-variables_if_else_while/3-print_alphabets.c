#include <stdio.h>
/**
 * main - prints alphabet first lower and upper case on the same line
 *
 * Return: always 0
 */
int main(void)
{
	char ab;
	char bc;

	for (ab = 'a' ; ab <= 'z' ; ab++)
	{
		putchar(ab);
	}
	for (bc = 'A' ; bc <= 'Z' ; bc++)
	{
		putchar(bc);
	}
putchar('\n');
return (0);
}
