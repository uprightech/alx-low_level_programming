#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: string to check
 * @accept: string to check for
 * Return: the number of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				x++;
				break;
			}

			else if (accept[i + 1] == '\0')
				return (x);
		}

		s++;
	}

	return (x);
}
