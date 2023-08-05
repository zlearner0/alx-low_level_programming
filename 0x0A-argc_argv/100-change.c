#include <stdio.h>
#include <stdlib.h>

/**
 * getMinimumCoins - Calculates the min number of coins
 * @cents: The amount of cents to make change for
 * Return: The minimum number of coins
 */
int getMinimumCoins(int cents);

/**
 * printMinimumCoins - Prints the minimum number of coins
 * @coins: The minimum number of coins
 */
void printMinimumCoins(int coins);

/**
 * main - Entry point of the program
 * @argc: The number of arguments passed to the program
 * @argv: An array of strings containing the arguments
 * Return: 0 for success, 1 for failure
 */
int main(int argc, char *argv[])
{
int cents, coins;
if (argc != 2)
{
printf("Error\n");
return (1);
}
cents = atoi(argv[1]);
if (cents < 0)
{
printf("0\n");
return (0);
}
coins = getMinimumCoins(cents);
printMinimumCoins(coins);
return (0);
}
/**
 * getMinimumCoins - Calculates the minimum number of coins
 * @cents: The amount of cents to make change for
 * Return: The minimum number of coins
 */
int getMinimumCoins(int cents)
{
int coins = 0;
while (cents > 0)
{
if (cents >= 25)
{
cents -= 25;
coins++;
}
else if (cents >= 10)
{
cents -= 10;
coins++;
}
else if (cents >= 5)
{
cents -= 5;
coins++;
}
else if (cents >= 2)
{
cents -= 2;
coins++;
}
else
{
cents -= 1;
coins++;
}
}
return (coins);
}
/**
 * printMinimumCoins - Prints the minimum number of coins
 * @coins: The minimum number of coins
 */
void printMinimumCoins(int coins)
{
printf("%d\n", coins);
}

