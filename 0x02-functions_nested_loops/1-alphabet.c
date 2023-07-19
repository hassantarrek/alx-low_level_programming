#include "main.h"
/**
 * print_alphabet - uses _putchar to print lowercase alphabet
 *
 * Return: void
 */
void print_alphabet(void)
{
	int x;

	for (x = 97; x <= 122; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
