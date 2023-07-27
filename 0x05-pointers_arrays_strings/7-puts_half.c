#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line
 * @str: integer
 * Return: void
 */
void puts_half(char *str)
{
	int counter;

	for (counter = 0; str[counter] != 0; counter++)
	{
		;
	}
	counter++;
	for (counter /= 2; str[counter] != 0; counter++)
	{
		_putchar(str[counter]);
	}
	_putchar('\n');
}
