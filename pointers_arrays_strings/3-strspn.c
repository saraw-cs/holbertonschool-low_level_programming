#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to search
 * @accept: the accepted characters
 *
 * Return: the number of accepted bytes at the beginning of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count;
	unsigned int i;

	count = 0;

	while (s[count] != '\0')
	{
		i = 0;

		while (accept[i] != '\0' && accept[i] != s[count])
			i++;

		if (accept[i] == '\0')
			break;

		count++;
	}

	return (count);
}
