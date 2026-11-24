#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_value - prints a value according to its type
 * @type: type of value
 * @args: arguments list
 * @separator: separator between values
 */
static void print_value(char type, va_list args, const char **separator)
{
	char *str;

	switch (type)
	{
	case 'c':
		printf("%s%c", *separator, va_arg(args, int));
		*separator = ", ";
		break;
	case 'i':
		printf("%s%d", *separator, va_arg(args, int));
		*separator = ", ";
		break;
	case 'f':
		printf("%s%f", *separator, va_arg(args, double));
		*separator = ", ";
		break;
	case 's':
		str = va_arg(args, char *);
		printf("%s", *separator);
		if (str == NULL)
			printf("(nil)");
		if (str != NULL)
			printf("%s", str);
		*separator = ", ";
		break;
	}
}

/**
 * print_all - prints anything
 * @format: list of types of arguments
 */
void print_all(const char * const format, ...)
{
	va_list args;
	const char *separator = "";
	const char *p = format;

	va_start(args, format);

	while (p != NULL && *p)
	{
		print_value(*p, args, &separator);
		p++;
	}

	va_end(args);
	printf("\n");
}
