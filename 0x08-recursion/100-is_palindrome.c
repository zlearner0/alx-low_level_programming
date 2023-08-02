#include "main.h"
/**
 * ending - gives string end index
 * @s: the string pointer
 * Return: the result
*/

int ending(char *s);
int is_palindrome(char *s);
int test(char *s, int case1, int case3, int case2);

int ending(char *s)
{
int x = 0;
if (*s > '\0')
x += ending(s + 1) + 1;
return (x);
}

/**
 * is_palindrome - check if string is palindrome
 * @s: the string pointer
 * Return: the result
*/

int is_palindrome(char *s)
{
int case3 = ending(s);
return (test(s, 0, case3 - 1, case3 % 2));
}

/**
 * test - check if string is palindrome
 * @s: the string pointer
 * @case1: the first letter to be compared
 * @case3: the last letter to be compared
 * @case2: the middle letter of the string
 * Return: the result
*/
int test(char *s, int case1, int case3, int case2)
{
if ((case1 == case3 && case2 != 0) || (case1 == case3 + 1 && case2 == 0))
return (1);
else if (s[case1] != s[case3])
return (0);
else
return (test(s, case1 + 1, case3 - 1, case2));
}
