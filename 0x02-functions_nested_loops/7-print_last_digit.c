#include "main.h"
/**
 * print_last_digit - Entry point
 *
 * @r: to be checked
 *
 * Return: value of the last digit
 */
int print_last_digit(int r)
{
	int x;

	if (r < 0)
		r = -r;

	x = r % 10;

	if (x < 0)
		x = -x;

	_putchar(x + '0');

	return (x);
}
