#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * num_magic - get magic no.
 * @mgc: the magic number
 */
void num_magic(unsigned char *mgc)
{
int x;
printf("  Magic:   ");
for (x = 0; x < 16; x++)
printf("%02x ", mgc[x]);
printf("\n");
}

/**
 * err_msg - give  message for the error
 * @text: pop up message for error
 */
void err_msg(char *text)
{
while (*text)
write(STDERR_FILENO, text++, 1);
}

/**
 * main - excute the code
 * @argc: no. of arguments
 * @argv: string arguments
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
int f, rd;
unsigned char arr[64];
if (argc != 2)
{
err_msg("Usage: elf_header elf_filename\n");
return (98);
}

f = open(argv[1], O_RDONLY);
if (f == -1)
{
err_msg("Error: Cannot read file\n");
return (98);
}
rd = read(f, arr, 64);
if (rd == -1)
{
err_msg("Error: Cannot read file\n");
close(f);
return (98);
}
if (arr[0] != 0x7f || arr[1] != 'E' || arr[2] != 'L' ||
arr[3] != 'F')
{
err_msg("Error: Not an ELF file\n");
close(f);
return (98);
}
num_magic(arr);
close(f);
return (0);
}
