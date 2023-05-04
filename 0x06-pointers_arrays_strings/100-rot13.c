#include "main.h"

/**
 * *rot13 - encodes a string using rot13
 * @v: pointer
 * Return: 0
 */
char *rot13(char *v)
{
	int i, j;
	char *alphabets = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
	char *rotated = {"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};

	for (i = 0; v[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (v[i] == alphabets[j])
			{
				v[i] = rotated[j];
				break;
			}
		}
	}
	return (v);
}
