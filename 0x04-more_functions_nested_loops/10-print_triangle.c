#include "main.h"
/**
 * print_triangle - for alx task and im sleeping
 * @size: to bee cheeeckeeddd
 * Return: void
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int x, z;

		for (x = 1; x <= size; x++)
		{
			for (z = x; z < size; z++)
			{
				_putchar(' ');
			}

			for (z = 1; z <= x; z++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}

}
