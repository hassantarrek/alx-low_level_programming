#include "main.h"
/**
 * _strncat - function for alx task
 * @dest: num 1
 * @src: num 2
 * @n: num 3
 * Return: void
 */
char *_strncat(char *dest, char *src, int n)
{
	int x;
        int y;

        x = 0;

        while (dest[x])
        {
                x++;
        }
        y = 0;

        while (y < n && src[y] != 0)
        {
                dest[y + x] = src[y];
                y++;
                x++;
        }
        return (dest);
}