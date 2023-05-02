#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: the string to reverse
 * Return: 0
 */
void rev_string(char *s)
{
	int x;
	int count = 0;
	char rev = s[0];

	while (s[count] != '\0')
	count++;
	for (x = 0; x < count; x++)
	{
		count--;
		rev = s[x];
		s[x] = s[count];
		s[count] = rev;
	}
}
