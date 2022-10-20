#include <stdio.h>

/**
* main - program that prints either a number
* or fizz or buzz or fizzbuzz
*
*
*Return: returns 0
*/

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && num % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (num % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (num % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
		printf("%d ", num);
		}
	}
	printf("\n");
	return (0);
}

