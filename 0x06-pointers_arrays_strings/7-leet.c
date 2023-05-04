#include "main.h"

/**
 * *leet -  encodes a string into 1337
 * @l: leet pointer
 * Return: 0
 */
char *leet(char *l)
{
	char a[] = "aeotlAEOTL";
	char n[] = "4307143071";
	int x = 0;
	int y;

	while (*(l + x) != '\0')
	{
		for (y = 0; y <= 9; y++)
		{
			if (*(l + x) == a[y])
			{
				*(l + x) = n[y];
			}
		}
		x++;
	}
	return (l);
}
