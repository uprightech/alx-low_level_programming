#include "main.h"



/**
*_puts - prints out a string followed by a newline
*@str: string to be printed
*Return: string
*/

void _puts(char *str)
{
	while(*str++ != '\0')
	{
		_putchar(*(str - 1));
	}
	_putchar('\n');
}
