#include "main.h"
/**
 * print_alphabet_x10 - uses _putchar to print lowercase alphabet x10
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char x, y;

	x = 0;

	while (x <= 9)
	{
		for (y = 97; y <= 122; y++)
	{
		_putchar(y);
	}
		x++;
		_putchar('\n');
	}
}
