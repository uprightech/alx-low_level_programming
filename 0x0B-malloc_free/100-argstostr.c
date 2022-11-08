#include "main.h"
/**
 * argstostr - Concatenates all arguments of the program into a string;
 *             arguments are separated by a new line in the string.
 * @ac: The number of arguments passed to the program.
 * @av: An array of pointers to the arguments.
 *
 * Return: If ac == 0, av == NULL, or the function fails - NULL.
 *         Otherwise - a pointer to the new string.
 */
char *argstostr(int ac, char **av)
{
	char *a;
	int arg, b, i, s = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (arg = 0; arg < ac; arg++)
	{
		for (b = 0; av[arg][b]; b++)
			s++;
	}

	a = malloc(sizeof(char) * s + 1);

	if (a == NULL)
		return (NULL);

	i = 0;

	for (arg = 0; arg < ac; arg++)
	{
		for (b = 0; av[arg][b]; b++)
			a[i++] = av[arg][b];

		a[i++] = '\n';
	}

	a[s] = '\0';

	return (a);
}
