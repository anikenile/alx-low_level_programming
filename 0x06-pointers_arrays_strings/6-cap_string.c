#include "main.h"

/**
 * *cap_string - capitalizes all words of a string
 * @t: pointer
 * Return: 0
 */
char *cap_string(char *t)
{
	int x;
	int y;
	int z[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	x = 0;
	while (*(t + x) != '\0')
	{
		if (*(t + x) >= 'a' && *(t + x) <= 'z')
		{
			if (x == 0)
			{
				*(t + x) = *(t + x) - 32;
			}
			else
			{
				for (y = 0; y <= 12; y++)
				{
					if (z[y] == *(t + x - 1))
					{
						*(t + x) = *(t + x) - 32;
					}
				}
			}
		}
	x++;
	}
	return (t);
}

