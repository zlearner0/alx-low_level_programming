#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int count_words(char *str);
int word_length(char *str);
char *copy_word(char *str, int length);

/**
 * strtow - splits a string into words
 * @str: the string to split
 * Return: pointer to an array of strings (words), or NULL if it fails
 */
char **strtow(char *str)
{
int num_words, word_index, word_length, i;
char **words;
if (str == NULL || *str == '\0')
return (NULL);
num_words = count_words(str);
if (num_words == 0)
return (NULL);
words = (char **)malloc((num_words + 1) * sizeof(char *));
if (words == NULL)
return (NULL);
word_index = 0;
word_length = 0;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] != ' ')
{
if (word_length == 0)
word_index = i;
word_length++;
}
else if (word_length != 0)
{
words[word_index] = copy_word(&str[word_index], word_length);
if (words[word_index] == NULL)
{
for (i = 0; i < word_index; i++)
free(words[i]);
free(words);
return (NULL);
}
word_length = 0;
word_index++;
}
}
if (word_length != 0)
{
words[word_index] = copy_word(&str[word_index], word_length);
if (words[word_index] == NULL)
{
for (i = 0; i <= word_index; i++)
free(words[i]);
free(words);
return (NULL);
}
word_index++;
}
words[word_index] = NULL;
return (words);
}

/**
 * count_words - counts the number of words in a string
 * @str: the string to count the words in
 * Return: the number of words in the string
 */
int count_words(char *str)
{
int count = 0;
int i;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
count++;
}
return (count);
}

/**
 * word_length - calculates the length of a word
 * @str: the string containing the word
 * Return: the length of the word
 */
int word_length(char *str)
{
int length = 0;
int i;
for (i = 0; str[i] != ' ' && str[i] != '\0'; i++)
length++;
return (length);
}

/**
 * copy_word - copies a word from a string into a new memory location
 * @str: the string containing the word
 * @length: the length of the word
 * Return: pointer to the copied word, or NULL if it fails
 */
char *copy_word(char *str, int length)
{
char *word = (char *)malloc((length + 1) * sizeof(char));
if (word == NULL)
return (NULL);
int i;
for (i = 0; i < length; i++)
word[i] = str[i];
word[length] = '\0';
return (word);
}
