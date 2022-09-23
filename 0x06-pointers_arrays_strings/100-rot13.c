#include "main.h"
/**
 * *rot13 - encrypts the file
 *@s:string to be encoded
 * Return: the encrpted string
 */
char *rot13(char *s)
{
	int i, j;
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char beta[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; alpha[j] != '\0' ; j++)
		{
			if (s[i] == alpha[j])
			{
				s[i] = beta[j];
				break;
			}
		}
	}

	return (s);
}
