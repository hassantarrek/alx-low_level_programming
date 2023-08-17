#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - as it says
 * @separator: space then comma again
 * @n: number
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *sep, *ptr;
	unsigned int x = 1;
	va_list list;

	if (separator == NULL || *separator == 0)
	{
		sep = "";
	}
	else
	{
		sep = (char *) separator;
	}
	va_start(list, n);

	if (n > 0)
	{
		printf("%s", va_arg(list, char *));
	}

	while (x < n)
	{
		ptr = va_arg(list, char*);

		if (ptr == NULL)
		{
			ptr = "(nil)";
		}

		printf("%s%s", sep, ptr);
		x++;
	}
	printf("\n");
	va_end(list);
}
