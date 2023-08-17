#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints everythig
 * @format: list
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list list;
	int x = 0, y = 0;
	char *sep = ", ", *str;

	va_start(list, format);

	while (format && format[y])
	{
		y++;
	}

	while (format && format[x])
	{
		if (x  == (y - 1))
		{
			sep = "";
		}
		switch (format[x])
		{
		case 'c':
			printf("%c%s", va_arg(list, int), sep);
			break;
		case 'i':
			printf("%d%s", va_arg(list, int), sep);
			break;
		case 'f':
			printf("%f%s", va_arg(list, double), sep);
			break;
		case 's':
			str = va_arg(list, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s%s", str, sep);
			break;
		}
		x++;
	}
	printf("\n");
	va_end(list);
}
