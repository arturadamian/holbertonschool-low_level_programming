#include <stdlib.h>

/**
 * argstostr - concatenates all the arguements
 * @ac: argc
 * @av: argv
 *
 * Return: pointer to a string or NULL
 */
char *argstostr(int ac, char **av)
{
	int a, b, c = 0, size;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			size++;
	}
	size += ac + 1;
	p = malloc(size * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			p[c++] = av[a][b];
		p[c++] = '\n';
	}
	return (p);
}
