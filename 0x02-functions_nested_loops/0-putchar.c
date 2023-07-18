#include "main.h"
#include <unistd.h>

int _putchar3(char letter)
{
write(1, &letter, 1);
return 0;
}
