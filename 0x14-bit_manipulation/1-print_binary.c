#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n:number
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int x, count = 0;
	unsigned long int cur;

	for (x = 63; x >= 0; x--)
	{
		cur = n >> x;

		if (cur & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
