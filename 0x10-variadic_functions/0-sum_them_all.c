#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: the number of paramters
 * @...: a variable number of paramters
 * Return: result of the function
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list hsn;
	unsigned int x, sum = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(hsn, n);

	for (x = 0; x < n; x++)
	{
		sum += va_arg(hsn, int);
	}

	va_end(hsn);

	return (sum);
}
