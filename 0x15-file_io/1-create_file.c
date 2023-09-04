#include "main.h"

/**
 * create_file - creates a file
 * @filename: arg
 * @text_content: as it says
 * Return: 1
 */

int create_file(const char *filename, char *text_content)
{
	int hs, x, len = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	hs = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	x = write(hs, text_content, len);

	if (hs == -1 || x == -1)
	{
		return (-1);
	}

	close(hs);

	return (1);

}
