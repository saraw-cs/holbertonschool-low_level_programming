#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - performs simple calculations
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	operation = get_op_func(argv[2]);
	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2][0] == '/' || argv[2][0] == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", operation(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
