#include "main.h"
/**
 * swap_int - This funcion swaps the values using pointers
 *
 * @a: value
 * @b: value
 * Description: swapping
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
