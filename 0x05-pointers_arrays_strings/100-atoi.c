#include "main.h"

/**
 * _atoi - prints integers after converting them to string
 * @s: String
 *
 * Return: integers
 */
int _atoi(char *s)
{
	int a;
	int sign;
	unsigned int num;

	a = 0;
	sign = 1;
	num = 0;
	while (s[a] != '\0')
	{
		if (s[a] == '-')
		{
			sign = -sign;
		}

		for (; s[a] >= '0' && s[a] <= '9'; a++)
		{
			num = num * 10 + ((int)s[a] - '0');
		}

		if (num > 0 || s[a] == '\0')
		{
			break;
		}

		a++;
	}

	return (num * sign);
}
