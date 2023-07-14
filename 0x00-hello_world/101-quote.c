#include <unistd.h>

/**
 * main - Utilizing main function to do the code
 *
 * Descripion: Using write function to print the output
 *
 * Return: 1 as required
*/

int main(void)
{
char solu[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(1, solu, 59);
return (1);
}
