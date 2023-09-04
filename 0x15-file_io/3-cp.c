#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

#define BUFFER_SIZE 1024

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, otherwise the exit status as requested in the prompt
 */
int main(int argc, char **argv)
{
int fd_from, fd_to, n_read, n_written;
char buffer[BUFFER_SIZE];
mode_t mode = S_IWUSR | S_IRUSR | S_IWGRP | S_IRGRP | S_IROTH;
if (argc != 3)
dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]), exit(97);
fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, mode);
if (fd_to == -1)
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
while ((n_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
{
n_written = write(fd_to, buffer, n_read);
if (n_written == -1)
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
}
if (n_read == -1)
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
if (close(fd_from) == -1)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from), exit(100);
if (close(fd_to) == -1)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), exit(100);
return (0);
}
