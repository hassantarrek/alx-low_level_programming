#include <stdio.h>
/**
 * main - entry point again
 * Description: for alx task, guess what
 * Return: 0 and 0 then 0
 */
int main(void)
{
	int hsn;

	for (hsn = 1; hsn <= 100; hsn++)
	{
		if (hsn % 3 == 0 && hsn % 5 != 0)
		{
			printf(" Fizz");
		} else if (hsn % 5 == 0 && hsn % 3 != 0)
		{
			printf(" Buzz");
		} else if (hsn % 3 == 0 && hsn % 5 == 0)
		{
			printf(" FizzBuzz");
		} else if (hsn == 1)
		{
			printf("%d", hsn);
		} else
		{
			printf(" %d", hsn);
		}
	}
	printf("\n");

	return (0);

}
