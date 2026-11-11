
#include "main.h"
#include <limits.h>

/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 *
 * Return: the converted integer
 */
int _atoi(char *s)
{
	int i;
	int sign;
	int num;
	int digit;
	int found;

	i = 0;
	sign = 1;
	num = 0;
	found = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			found = 1;
			digit = s[i] - '0';

			if (sign == 1)
			{
				if (num > (INT_MAX - digit) / 10)
					return (INT_MAX);
				num = num * 10 + digit;
			}
			else
			{
				if (num < (INT_MIN + digit) / 10)
					return (INT_MIN);
				num = num * 10 - digit;
			}
		}
		else if (found == 1)
			break;
		i++;
	}
	return (sign == -1 ? num : num);
}
