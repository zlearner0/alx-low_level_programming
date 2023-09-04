#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - read a file to standard output
 * @filename: the to be read
 * @letters: no. of letters to be read
 * Return: no. of letters read
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int f;
ssize_t num_rd;
ssize_t num_writ;
char arr[arrsize * 8];
if (filename == NULL)
return (0);
f = open(filename, O_RDONLY);
if (f == -1)
return (0);
num_rd = read(f, arr, letters);
if (num_rd == -1)
return (0);
num_writ = write(STDOUT_FILENO, arr, num_rd);
if (num_writ == -1 || num_writ != num_rd)
return (0);
close(f);
return (num_rd);
}
