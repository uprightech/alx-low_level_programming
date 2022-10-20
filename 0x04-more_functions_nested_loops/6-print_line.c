#include "main.h"

/**
* print_line - prints a straight line
* @n: parameter
* Returns nothing
*/

void print_line(int n)
{
	while (n-- > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}
