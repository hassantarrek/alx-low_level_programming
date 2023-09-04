#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 * @filename: arg
 * @letters: number of letters
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t hs;
	ssize_t x;
	ssize_t y;

	hs = open(filename, O_RDONLY);

	if (hs == -1)
	{
		return (0);
	}
	buff = malloc(sizeof(char) * letters);
	y = read(hs, buff, letters);
	x = write(STDOUT_FILENO, buff, y);

	free(buff);
	close(hs);
	return (x);
}
