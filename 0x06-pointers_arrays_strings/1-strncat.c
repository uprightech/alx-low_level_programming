#include "main.h"
/**
* _strncat - appends n characters from src to a destination string
* @dest: pointer to the destination buffer
* @src: pointer to the source string to be copied
* @n: number of characters to be copied
* Return: a pointer to the destination string
*/
char *_strncat(char *dest, char *src, int n)
{
	char *ret = dest;

	if (src == NULL || dest == NULL)
		return (ret);
	while (*dest != '\0')
	{
		dest++;
	}

	while (n-- && *src != '\0')
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (ret);
}
