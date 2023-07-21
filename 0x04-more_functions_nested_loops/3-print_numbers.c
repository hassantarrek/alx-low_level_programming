#include "main.h"
/**
 * print_numbers - main function
 *
 * Retrun: 0
 */
void print_numbers(void)
{
	int x = '0';

	while (x <= '9')
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
}

