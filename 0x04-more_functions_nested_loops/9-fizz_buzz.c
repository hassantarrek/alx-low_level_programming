#include <stdio.h>
/**
 * main - entry point again
 * Description: for alx task, guess what
 * Return: 0 and 0 then 0
 */
int main(void)
{
	int x;

	x = 1;
	printf("%d", x);
	for (x = 2; x <= 100;x++)
	{
		if ((x % 3 == 0) && (x % 5 == 0))
		{
			printf(" FizzBuzz");
		}
		else if (x % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (x % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d", x);
		}
	}
	printf("\n");
	return (0);

}
