#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space
 * @str: string
 * Return: NULL or a value
 */
char *_strdup(char *str)
{
	char *x = malloc(strlen(str) + 1);

	if (str == NULL || x == NULL)
	{
		return (NULL);
	}
	strcpy(x, str);
	return (x);
}
