#include "main.h"

int chk_pal(char *s, int x, int lent);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks if a string is empty
 * @s: string to check
 * Return: 1 if it is or 0 if it's not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (chk_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to calculate
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * chk_pal - checks the characters recursively for palindrome
 * @s: string to check
 * @x: iterator
 * @lent: length of the string
 * Return: 1 if palindrome, 0 if not
 */
int chk_pal(char *s, int x, int lent)
{
	if (*(s + x) != *(s + lent - 1))
		return (0);
	if (x >= lent)
		return (1);
	return (chk_pal(s, x + 1, lent - 1));
}
