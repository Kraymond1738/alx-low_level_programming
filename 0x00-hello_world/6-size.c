#include <stdio.h>
/**
 * main - prints size of characterz
 *
 * Return: gives 0 (true)
 */
int main(void)
{char a;
int b;
long int c;
long long int d;
float e;
printf("size of a char: %d byte(s)\nsize of an int: %d byte(s)\nsize of a long int: %d byte(s)\nsize of a long long int: %d byte(s)\nsize of a float: %d byte(s)\n", sizeof(a), sizeof(b), sizeof(c), sizeof(d), sizeof(e));
return (0);
}
