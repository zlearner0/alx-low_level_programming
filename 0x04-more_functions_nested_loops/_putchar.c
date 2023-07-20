#include "main.h"
#include <unistd.h>

/**
 * _putchar - accepts character and print it out
 * Descripion: printout the character is input
 * @letter: the input to be printed
 * Return: the letter that is being input
*/

int _putchar(char letter)
{
return (write(1, &letter, 1));
}
