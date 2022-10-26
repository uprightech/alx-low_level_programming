#include "main.h"
/**
* _strcat - concatenates two strings, appending src at the end of dest
* @dest: pointer to the destination string where src will be copied
* @src: pointer to the source string to copy
* Return: a pointer to the destination string
*/
char *_strcat(char *dest, char *src)
{
	char *ret = dest;

	if (src == NULL || dest == NULL)
		return (ret);
	while (*dest != '\0')
	{
		dest++;
	}

	while (*src++ != '\0')
	{
		*dest++ = *(src - 1);
	}
	*dest = '\0';
	return (ret);
}
