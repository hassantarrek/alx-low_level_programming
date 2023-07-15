#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: for alx task
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int x = 122;

	while (x >= 97)
	{
		putchar(x);
		x--;
	}
	putchar('\n');
	return (0);
}
