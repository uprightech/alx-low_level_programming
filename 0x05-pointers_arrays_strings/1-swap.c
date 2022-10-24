#include "main.h"

/**
* swap_int - swap two integers
* @a: pointer to first integer
* @b: pointer to second integer
* Return: nothing
*/

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
