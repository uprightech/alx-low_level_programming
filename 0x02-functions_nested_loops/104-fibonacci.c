#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers, starting with
 *        1 and 2, separated by a comma followed by a space.
 *		  Note: Get back to this and optimize. Too lengthy.
 *
 * Return: 0.
 */

int main(void)
{
	int count;
	unsigned long first_fib = 0, second_fib = 1, sum = 0;
	unsigned long fib1_half1, fib1_half2, fib2_half1, fib2_half2;
	unsigned long half1, half2;

	for (count = 0; count < 92; count++)
	{
		sum = first_fib + second_fib;
		printf("%lu, ", sum);

		first_fib = second_fib;
		second_fib = sum;
	}

	fib1_half1 = first_fib / 10000000000;
	fib2_half1 = second_fib / 10000000000;
	fib1_half2 = first_fib % 10000000000;
	fib2_half2 = second_fib % 10000000000;

	for (count = 93; count < 99; count++)
	{
		half1 = fib1_half1 + fib2_half1;
		half2 = fib1_half2 + fib2_half2;

		if (fib1_half2 + fib2_half2 > 9999999999)
		{
			half1 += 1;
			half2 %= 10000000000;
		}
		printf("%lu%lu", half1, half2);

		if (count != 98)
			printf(", ");

		fib1_half1 = fib2_half1;
		fib1_half2 = fib2_half2;
		fib2_half1 = half1;
		fib2_half2 = half2;
	}
	printf("\n");
	return (0);
}
