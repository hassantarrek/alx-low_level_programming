#include <stdio.h>
/**
 * main - Entry point
 *
 * description: for the alx task agaain
 *
 * Return: always 0 (again)
 *
 */
int main(void)
{
	int x = 97;

	while (x <= 122)
	{
		if (x == 101)
		{
			x++;
			continue;
		}
		else if (x == 113)
		{
			x++;
			continue;
		}

		putchar(x);
		x++;
	}
	return (0);
}
