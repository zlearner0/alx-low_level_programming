#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - check the code
 *@argc: number of input options
 *@argv: string array of input options
 * Return: Always EXIT_SUCCESS.
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
char key[7], *symb;
int len = strlen(argv[1]), i, saver;
symb = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
saver = (len ^ 59) & 63;
key[0] = symb[saver];
saver = 0;
for (i = 0; i < len; i++)
saver += argv[1][i];
key[1] = symb[(saver ^ 79) & 63];
saver = 1;
for (i = 0; i < len; i++)
saver *= argv[1][i];
key[2] = symb[(saver ^ 85) & 63];
saver = 0;
for (i = 0; i < len; i++)
{
if (argv[1][i] > saver)
saver = argv[1][i];
}
srand(saver ^ 14);
key[3] = symb[rand() & 63];
saver = 0;
for (i = 0; i < len; i++)
saver += (argv[1][i] * argv[1][i]);
key[4] = symb[(saver ^ 239) & 63];
for (i = 0; i < argv[1][0]; i++)
saver = rand();
key[5] = symb[(saver ^ 229) & 63];
key[6] = '\0';
printf("%s", key);
return (0);
}
