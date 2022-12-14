#include "main.h"
/**
* _strncpy - copies n characters of a string to another buffer
* @dest: pointer to the destination buffer
* @src: pointer to the source string to be copied
* @n: number of characters to be copied
* Return: a pointer to the destination string
*/
char *_strncpy(char *dest, char *src, int n)
{
	char *ret = dest;

	if (dest == NULL || src == NULL || n <= 0)
		return (ret);
	while (n--)
	{
		if (*src == '\0' && n != 0)
			*dest++ = '\0';
		else
			*dest++ = *src++;
	}
	return (ret);
}
