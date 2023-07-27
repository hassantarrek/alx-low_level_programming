#include "main.h"
/**
 * rev_string - reverses a string
 * @s: integer
 * Return: void
 */
void rev_string(char *s)
{
	char rev = s[0];
	int count = 0;
	int x;

	while (s[count] != 0)
	{
		count++;
	}
	x = 0;

	while (x < count)
	{
		count--;
		rev = s[x];
		s[x] = s[count];
		s[count] = rev;
		x++;
	}
}
