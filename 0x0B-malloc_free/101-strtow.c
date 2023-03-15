#include "main.h"
int	word_count(char *str);
int	word_len(char *str, int start);
/**
 * strtow - a function that splits a string into words
 * @str: a string input
 * Return: an array of splitted words
 */
char **strtow(char *str)
{
	int len = 0;
	int i = 0;
	int j = 0;
	int k = 0;
	char **words;

	if (!str || !str[0])
		return (NULL);
	len = word_count(str);
	if (len == 0)
		return (NULL);
	words = (char **) malloc((len + 1) * sizeof(char *));
	if (!words)
		return (NULL);
	while (i < len && str[j])
	{
		k = 0;
		while (str[j] && str[j] == ' ')
			j++;
		k = word_len(str, j);
		words[i] = (char *) malloc((k + 1) * sizeof(char));
		if (!words[i])
		{
			j = -1;
			while (j++ < i)
				free(words[j]);
			free(words);
			return (NULL);
		}
		k = 0;
		while (str[j] && str[j] != ' ')
			words[i][k++] = str[j++];
		words[i][k] = '\0';
		i++;
	}
	words[i] = NULL;
	return (words);
}
/**
 * word_count - a function that counts how many
 * words are in a sentence
 * @str: a string input
 * Return: the number of words in a sentence
 */
int word_count(char *str)
{
	int i = 0;
	int count = 0;

	while (str[i])
	{
		while (str[i] && str[i] == ' ')
			i++;
		if (str[i])
			count++;
		while (str[i] && str[i] != ' ')
			i++;
	}
	return (count);
}
/**
 * word_len - a function that returns the length of a word
 * @str: a string input
 * @start: a number input
 *  Return: the lenght of the word
 */
int word_len(char *str, int start)
{
	int len = 0;

	while (str[start] && str[start] != ' ')
	{
		start++;
		len++;
	}
	return (len);
}
