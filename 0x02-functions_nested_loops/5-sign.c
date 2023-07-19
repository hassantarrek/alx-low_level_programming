#include "main.h"
/**
 * print_sign - Entry point
 *
 * @n: to be checked
 *
 * Return: 0 or 1 or -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}

	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}

	else
		return (0);

}
