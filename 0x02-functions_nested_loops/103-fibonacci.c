#include <stdio.h>

/**
 * main - Prints the sum of even-valued Fibonacci sequence
 *       terms not exceeding 4000000.
 *
 * Return: Always 0.
 */

int main(void)
{
	unsigned long first_fib = 0, second_fib = 1, fibsum;
	float tot_sum;

	while (1)
	{
		fibsum = first_fib + second_fib;
		if (fibsum > 4000000)
			break;

		if ((fibsum % 2) == 0)
			tot_sum += fibsum;

		first_fib = second_fib;
		second_fib = fibsum;
	}
	printf("%.0f\n", tot_sum);

	return (0);
}
