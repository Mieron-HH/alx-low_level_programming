#include "main.h"
/**
 * string_nconcat - a function that concatenates two strings
 * @s1: a string input
 * @s2: a string input
 * @n: an unsigned integer input
 * Return: a concatenated string, or NULL otherwise
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int len1 = 0;
	unsigned int len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;
	if (n < len2)
		s = (char *) malloc((len1 + n + 1) * sizeof(char));
	else
		s = (char *) malloc((len1 + len2 + 1) * sizeof(char));
	if (!s)
		return (NULL);
	while (i < len1)
		s[j++] = s1[i++];
	j = 0;
	while (n < len2 && i < len1 + n)
		s[i++] = s2[j++];
	while (len2 <= n && i < len1 + len2)
		s[i++] = s2[j++];
	s[i] = '\0';
	return (s);
}
