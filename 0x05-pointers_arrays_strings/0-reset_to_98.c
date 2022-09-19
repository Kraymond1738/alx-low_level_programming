#include "main.h"
/**
 * main - pointers
 *
 * Return: zero
 */
int main(void)
{
	int n = 402;
	int  *pt = &n;

	reset_to_98(&n);

	_putchar("n=%d\n", *pt);
	return (0);
}


