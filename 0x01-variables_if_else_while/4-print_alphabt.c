#include <stdio.h>
/**
 * main - this function prints the alphabet except q and e
 *
 * Return: 0
 */
int main(void)
{
	char ab;

	for (ab = 'a' ; ab <= 'z' ; ab++)
	{
		if (ab != 'e' && ab != 'q')
		putchar(ab);
	}
	putchar('\n');
	return (0);
}
