#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024
#define perm (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)
/**
 * print_error_and_exit - print message error
 * @msg: error message
 * @f: the required name of file
 * @exit_code: the no. of error
 * Return: nothing
 */
void print_error_and_exit(const char *msg, const char *f, int exit_code)
{
dprintf(STDERR_FILENO, msg, f);
dprintf(STDERR_FILENO, "\n");
exit(exit_code);
}
/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, otherwise the exit status as requested in the prompt
 */
int main(int argc, char *argv[])
{
int ffrom, fto, rd, wr;
char buffer[BUFFER_SIZE];
if (argc != 3)
{
print_error_and_exit("Usage: cp file_from file_to", "", 97);
}
ffrom = open(argv[1], O_RDONLY);
if (ffrom == -1)
{
print_error_and_exit("Error: Can't read from file %s", argv[1], 98);
}
fto = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, perm);
if (fto == -1)
{
print_error_and_exit("Error: Can't write to %s", argv[2], 99);
}
while ((rd = read(ffrom, buffer, BUFFER_SIZE)) > 0)
{
wr = write(fto, buffer, rd);
if (wr == -1)
{
print_error_and_exit("Error: Can't write to %s", argv[2], 99);
}
}
if (rd == -1)
{
print_error_and_exit("Error: Can't read from file %s", argv[1], 98);
}
if (close(ffrom) == -1)
print_error_and_exit("Error: Can't close fd %d", argv[1], 100);
if (close(fto) == -1)
{
print_error_and_exit("Error: Can't close fd %d", argv[2], 100);
}
return (0);
}
