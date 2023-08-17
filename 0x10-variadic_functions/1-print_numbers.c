#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: comma then space
 * @n: number
 * Return: result
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list hsn;
	unsigned int index = 0;

	va_start(hsn, n);

	while (index < n)
	{
		printf("%d", va_arg(hsn, int));

		if (index != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
		index++;
	}

	printf("\n");

	va_end(hsn);
}

