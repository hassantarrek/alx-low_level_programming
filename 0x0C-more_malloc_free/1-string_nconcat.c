#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1: a pointer
 * @s2: another pointer
 * @n: num
 * Return: pointer space
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	int s1Length, s2Length;
	unsigned int x, y;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (s1Length = 0; s1[s1Length] != '\0'; s1Length++)
		;
	for (s2Length = 0; s2[s2Length] != '\0'; s2Length++)
		;
	str = malloc(s1Length + n + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	x = 0;
	while (s1[x] != '\0')
	{
		str[x] = s1[x];
		x++;
	}
	y = 0;
	while (y < n)
	{
		str[x] = s2[y];
		y++;
		x++;
	}
	str[x] = '\0';
	return (str);

}
