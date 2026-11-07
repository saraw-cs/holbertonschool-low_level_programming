#include <stdio.h>

/**
 * main - prints numbers in base 16
 *
 * Return: Always 0
 */
int main(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
	{
		putchar(number);
	}

	for (number = 'a'; number <= 'f'; number++)
	{
		putchar(number);
	}

	putchar('\n');

	return (0);
}
