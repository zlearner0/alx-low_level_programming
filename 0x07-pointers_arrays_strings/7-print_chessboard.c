#include "main.h"

/**
 * print_chessboard -prints 2D array
 * @a: the pointer to array name to be printed
*/

void print_chessboard(char (*a)[8])
{
int i, j;
for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
char *c = a[i][j];
_putchar(c);
}
_putchar('\n');
}
}
