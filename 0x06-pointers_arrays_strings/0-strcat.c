#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: string 1
 * @src: string 2
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int x;
	int y;

	x = 0;

	while (dest[x])
	{
		x++;
	}
	y = 0;

	while (src[y])
	{
		dest[x] = src[y];
		y++;
		x++;
	}
	return (dest);
}
