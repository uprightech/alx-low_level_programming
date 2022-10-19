#include "main.h"

/**
* print_sign - prints the sign of a number.
* @n: The number whose sign to print
*
* Return: 1 if n positive,
*	0 if n equal to zero,
*	-1 if n is negative.
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
