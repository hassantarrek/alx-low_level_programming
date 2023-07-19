#include "main.h"
/**
 * jack_bauer - no good theme
 *
 * Return: every minute of the worst day in my life
 */
void jack_bauer(void)
{
	int x, y;

	for (y = 0; y <= 23; y++)
	{
		for (x = 0; x <= 59; x++)
		{
			_putchar((x / 10) + 48);
			_putchar((x % 10) + 48);
			_putchar(':');
			_putchar((x / 10) + 48);
			_putchar((x % 10) + 48);
			_putchar('\n');
		}
	}
}
