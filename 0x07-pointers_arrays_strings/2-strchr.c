#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @c: character
 * @s: string
 * Return: the first occurrence of the character
 */
char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
		{
			return (&s[x]);
		}
	}
	return (0);
}
