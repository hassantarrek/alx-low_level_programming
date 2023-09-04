#include "main.h"
void close_file(int hs);
char *create_buffer(char *file);

/**
 * create_buffer - Allocates 1024 bytes
 * @file: name of the file buffer
 * Return: pointer
 */

char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}

/**
 * close_file - Closes file descriptors
 * @hs: The file descriptor to be closed
 * Return: void
 */

void close_file(int hs)
{
	int x;

	x = close(hs);

	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", hs);
		exit(100);
	}
}

/**
 * main - Main function for the task
 * @argc: number of arguments
 * @argv: array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int from, to, x, y;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	x = read(from, buff, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || x == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		y = write(to, buff, x);
		if (to == -1 || y == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}

		x = read(from, buff, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (x > 0);
	free(buff);
	close_file(from);
	close_file(to);
	return (0);
}
