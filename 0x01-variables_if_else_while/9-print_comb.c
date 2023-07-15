#include <stdio.h>
/**
 * main - Entry point
 *
 * description: like every time lol
 *
 * Return: always 0 (lol again)
 *
 */
int main(void)
{
	int abdo;

	for (abdo = 48; abdo <= 57; abdo++)
	{
		putchar(abdo);
		if (abdo == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
