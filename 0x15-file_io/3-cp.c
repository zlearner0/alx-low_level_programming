#include <stdlib.h>  /* for exit() */
#include <stdio.h> /* for dprintf */
#include <unistd.h> /* to define STDERR_FILENO */
#include <fcntl.h> /* for open() */
/**
 * main - rum the code lines inside
 * @argc: no. of inputs
 * @argv: array of inputs string
 * Return: zero
*/

int main(int argc, char **argv)
{
int ffrom, fto;
ssize_t fr, fw;
char arr[1024];

if (argc != 3)
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n")
, exit(97);

fto = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fto == -1)
dprintf(STDERR_FILENO, "Error : Can't write to %s\n", argv[2]), exit(99);

ffrom = open(argv[1], O_RDONLY);
if (ffrom == -1)
{
dprintf(STDERR_FILENO, "Error : Can 't read from file %s\n", argv[1]);
exit(98);
}
while ((fr = read(ffrom, arr, 1024)) > 0)
{
fw = write(fto, arr, fr);
if (fr == -1 || fw == -1 || fr != fw)
dprintf(STDERR_FILENO, "Error : Can't write to %s\n", argv[2]), exit(99);
}

if (close(ffrom) == -1)
dprintf(STDERR_FILENO, "Error : Can' t Close fd %i\n", ffrom), exit(100);

if (close(fto) == -1)
dprintf(STDERR_FILENO, "Error : Can' t Close fd %i\n", fto), exit(100);

return (0);
}
