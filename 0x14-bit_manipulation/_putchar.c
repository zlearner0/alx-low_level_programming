#include "main.h"
#include <unistd.h>

/**
 * _putchar - Utilizing the function to print character
 * @letter: the input character for printing
 * Return: 1 for getting result and -1 when failing
*/

int _putchar(char letter)
{
return (write(1, &letter, 1));
}
