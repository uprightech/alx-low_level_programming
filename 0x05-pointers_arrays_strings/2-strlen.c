#include "main.h"

/**
* _strlen - function to compute the length of a string
* @s: string
* Return: length of string
*/

int _strlen(char *s)
{
	int i;

	i = 0;
	if (s == 0)
		return (0);

	while (*s++ != '\0')
		i++;
	return (i);
}
