#include "main.h"
/**
 * str_concat - Concatenates two strings.
 * @s1: The string to be concatenated .
 * @s2: The string to be concatenated to s1.
 *
 * Return: NULL or result
 */
char *str_concat(char *s1, char *s2)
{
char *result;
int i, j = 0, l = 0;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (i = 0; s1[i] || s2[i]; i++)
l++;
result = malloc(sizeof(char) * l);
if (result == NULL)
return (NULL);
for (i = 0; s1[i]; i++)
result[j++] = s1[i];
for (i = 0; s2[i]; i++)
result[j++] = s2[i];

return (result);
}
