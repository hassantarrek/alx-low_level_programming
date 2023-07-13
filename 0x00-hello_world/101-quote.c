#include <stdio.h>
#include <unistd.h>
/*
 * main - Entry point
 *
 * Description: main function uses write function
 *
 * int - additional function
 *
 * Description: int function helps the write function
 *
 * @void: Is a parameter
 *
 * Return: 1 (Fail)
 */

int main(void)
{
	char x[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2,
	x, 59);

	return (1);
}
