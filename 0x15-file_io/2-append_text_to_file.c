#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <sys/stat.h>
/**
 * _strlen - count a string length
 * @str: pointer to string
 * Return: text length
*/
int _strlen(char *str)
{
int len;
for (len = 0; str[len]; len++)
;
return (len);
}
/**
 * append_text_to_file - append text
 * @filename: the to be read
 * @text_content: string to be written
 * Return: 1 for success
*/

int append_text_to_file(const char *filename, char *text_content)
{
int f;
if (filename == NULL)
return (-1);
f = open(filename, O_WRONLY | O_APPEND);
if (f == -1)
return (-1);
if (text_content != NULL)
{
ssize_t num_written = write(f, text_content, _strlen(text_content));
if (num_written == -1)
{
close(f);
return (-1);
}
}
close(f);
return (1);
}
