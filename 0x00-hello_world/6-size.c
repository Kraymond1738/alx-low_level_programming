#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always returns  0 (success)
 */
int main(void)
{  
char a;
int b;
long int c;
long long int d;
float e;

printf("size of a char:%d byte(s)\n", (unsigned long)sizeof(d));
printf("size of an int:%d byte(s)\n", sizeof(b));
printf("size of a long int:%d byte(s)\n", sizeof(c));
printf("size of a long long int:%d byte(s)\n", sizeof(d));
printf("size of a float int:%d byte(s)\n", sizeof(e));
return(0);
}
