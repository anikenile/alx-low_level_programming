#include <stdio.h>
#include "main.h"

/**
 */
int get_endianness(void)
{
	int i = 1;
	char *c = (char *) &i;
	return (int)*c;
}
