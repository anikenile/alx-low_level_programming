#include "main.h"

/**
 * *string_toupper - changes all lowercase letters of a string to uppercase
 * @u: pointer
 * Return: 0
 */
char *string_toupper(char *u)
{
	int x = 0;

	while (*(u + x) != '\0')
	{
		if (*(u + x) >= 'a' && *(u + x) <= 'z')
		{
			*(u + x) = *(u + x) - 32;
		}
		x++;
	}
	return (u);
}
