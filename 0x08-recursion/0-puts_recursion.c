#include "main.h"
#include <unistd.h>

int _putchar(char c);

/**
* _puts_recursion - writes a string and a trailing newline to stdout
* @s: A pointer to the string to write.
* Return: None
*/
void _puts_recursion(char *s)
{
	if (s == NULL)
		return;
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
