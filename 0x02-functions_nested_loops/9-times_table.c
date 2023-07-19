#include "main.h"
/**
 * times_table - time table function
 * function that prints the 9 times table, starting with 0
 * h, s and n inspired from my name, Hassan
 * Return: void
 */
void times_table(void)
{
		int h, s, n;


		for (h = 0; h < 10; h++)
		{
			for (s = 0; s < 10; s++)
			{
				n = s * h;
				if (s == 0)
				{
					_putchar(n + '0');
				}


				if (n < 10 && s != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(n + '0');
				} else if (n >= 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((n / 10) + '0');
					_putchar((n % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
