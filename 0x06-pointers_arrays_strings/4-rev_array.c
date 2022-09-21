#include "main.h"
/**
 * reverse_array - reverses the content of an array
 * of integers.
 * @a: array.
 * @n: number of elements of the array.
 * Return: no return.
 */

void reverse_array(int *a, int n)
{
	int j, k, l;

	for (j = 0; j < n - 1; j++)
	{
		for (k = j + 1; k > 0; k--)
		{
			temp = *(a + k);
			*(a + k) = *(a + (k - 1));
			*(a + (k - 1)) = l;
		}
	}
}
