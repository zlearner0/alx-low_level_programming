#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: the number of arguments
 * @av: the array of arguments
 * Return: pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
if (ac == 0 || av == NULL)
return (NULL);
int i, j, k;
char *str;
int total_length = 0;
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
total_length++;
total_length++;
}
str = (char *)malloc((total_length + 1) * sizeof(char));
if (str == NULL)
return (NULL);
k = 0;
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
str[k++] = av[i][j];
str[k++] = '\n';
}
str[k] = '\0';
return (str);
}
