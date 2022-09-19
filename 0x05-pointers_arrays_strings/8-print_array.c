#include "main.h"
#include <stdio.h>
/**
 *print_array - prints n integers from an array
 *@a: pointer
 *@n: valueof int to print
 * Return: integers
 */
void print_array(int *a, int n)
{
	int runs;

	for (runs = 0; runs < n; runs++)
	{
		if (runs == n - 1)
		{
			printf("%d\n", *(a + runs));
		}
		else
		{
			printf("%d, ", *(a + runs));
		}
	}
	printf("\n");
}
