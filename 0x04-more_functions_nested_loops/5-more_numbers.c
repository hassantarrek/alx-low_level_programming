#include "main.h"
/**
 * more_numbers - main function
 * x for the numbers
 * y for the rows
 * z for the count
 * Return: void
 */
void more_numbers(void)
{
	int x, y, z;

	for (y = 1; y <= 10; y++)
	{
		for (z = 0; z <= 14; z++)
		{
			x = z;
			if (z > 9)
			{
				_putchar(1 + 48);
				x = z % 10;
			}
			_putchar(x + 48);
		}
		_putchar('\n');
	}
}
