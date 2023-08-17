#include "variadic_functions.h"
#include <unistd.h>

/**
 * _putchar - Utilizing the function to print character
 * Descripion: input a charachter and print it
 * @letter: the input character for printing
 * Return: 1 for getting result and -1 when failing
*/

int _putchar(char letter)
{
return (write(1, &letter, 1));
}
