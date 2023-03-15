#include "main.h"
/**
 * argstostr - a function that concatenates all
 * the arguments of your program
 * @ac: a number input
 * @av: an array of strings
 * Return: a concatenated string
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i = 0;
	int j = 0;
	int size = 0;

	if (ac == 0 || !av)
		return (NULL);
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
			j++;
		size += ++j;
		i++;
	}
	str = (char *) malloc((size + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	size = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
			str[size++] = av[i][j++];
		str[size++] = '\n';
		i++;
	}
	str[size] = '\0';
	return (str);
}
