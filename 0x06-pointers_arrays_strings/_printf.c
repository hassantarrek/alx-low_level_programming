#include "main.h"

/**
 * _printf - prints anything
 * @format: list of types of arguments passed to the function
 * Return: number of characters printed (excluding the null byte)
 */
int _printf(const char *format, …)
{
	va_list args;
	int i = 0, j = 0, count = 0;
	spec_t specs[] = {
		{‘c’, print_char},
		{‘s’, print_string},
		{‘d’, print_int},
		{‘i’, print_int},
		{‘b’, print_binary},
		{‘u’, print_unsigned},
		{‘o’, print_octal},
		{‘x’, print_hex},
		{‘X’, print_HEX},
		{‘S’, print_S},
		{‘p’, print_pointer},
		{‘+’, print_plus},
		{’ ‘, print_space},
		{’#', print_hash},
		{0, NULL}};
	if (format == NULL)
	{
		return (-1);
	}
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == ‘%’)
		{ i++;
			if (format[i] == ‘%’)
			{
				_putchar(‘%’);
				count++;
			}
			else
			{
				j = 0;
				while (specs[j].c)
				{
					if (format[i] == specs[j].c)
					{
						count += specs[j].f(args);
						break;
					} j++;
				}
				if (specs[j].c == 0)
				{
					_putchar(‘%’);
					_putchar(format[i]);
					count += 2;
				}
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}
