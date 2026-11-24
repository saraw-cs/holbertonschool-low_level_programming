#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments
 */
void print_all(const char * const format, ...)
{
	va_list args;
	const char *separator = "";
	const char *p = format;
	char *str;

	va_start(args, format);

	while (p != NULL && *p)
	{
		switch (*p)
		{
		case 'c':
			printf("%s%c", separator, va_arg(args, int));
			separator = ", ";
			break;
		case 'i':
			printf("%s%d", separator, va_arg(args, int));
			separator = ", ";
			break;
		case 'f':
			printf("%s%f", separator, va_arg(args, double));
			separator = ", ";
			break;
		case 's':
			str = va_arg(args, char *);
			printf("%s", separator);
			switch (str == NULL)
			{
			case 1:
				printf("(nil)");
				break;
			default:
				printf("%s", str);
			}
			separator = ", ";
			break;
		}
		p++;
	}

	va_end(args);
	printf("\n");
}
