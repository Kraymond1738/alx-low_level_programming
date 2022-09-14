#include <stdio.h>
/**
 * main - prints the natural
 *
 * Return: always a zero
 */
int main(void)
{
	int x, y;

	while (y < 1024)
	{
		if ((y % 3 == 0 && y % 5 == 0))
		{
			x += y;
		}
		y++;
	}

	printf("%d\n", x);
	return (0);
}

