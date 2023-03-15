#include "main.h"
/**
 * str_concat - a function that concatenates two strings
 * @s1: a string input
 * @s2: a string input
 * Return: a concatenated string, or NULL otherwise
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i = 0;
	int j = 0;

	while (s1 && s1[i])
		i++;
	while (s2 && s2[j])
		j++;
	concat = (char *) malloc((i + j + 1) * sizeof(char));
	if (!concat)
		return (NULL);
	i = 0;
	while (s1 && s1[i])
	{
		concat[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2 && s2[j])
	{
		concat[i + j] = s2[j];
		j++;
	}
	concat[i + j] = '\0';
	return (concat);
}
