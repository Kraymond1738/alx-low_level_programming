#include  <stdio.h>
/**
 * main - prints all single digit numbers
 *
 * Return: 0
 */
int main(void)
{
	int ab;

	for (ab = 0; ab <= 10; ab++)
	{
		putchar(ab + '0');
	}
	putchar('\n');
	return (0);
}
