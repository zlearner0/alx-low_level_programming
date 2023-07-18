#include "main.h"
#include <unistd.h>

int _putchar3(char letter)
{
return (write(1, &letter, 1));
}
