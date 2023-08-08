#include "main.h"

/**
 * str_concat - get ends of input and add together for size
 * @s1: input one
 * @s2: input two
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *x;
	int y, z;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	y = z = 0;
	while (s1[y] != '\0')
		y++;
	while (s2[z] != '\0')
		z++;
	x = malloc(sizeof(char) * (y + z + 1));

	if (x == NULL)
		return (NULL);
	y = z = 0;
	while (s1[y] != '\0')
	{
		x[y] = s1[y];
		y++;
	}

	while (s2[z] != '\0')
	{
		x[y] = s2[z];
		y++, z++;
	}
	x[y] = '\0';
	return (x);
}

