#include <stdio.h>
#include "main.h"

/** get_endianness - check order in which a sequence of bytes is stored
 * Return: Little or big Endian
 */
int get_endianness(void)
{
	int a = 1;
	char *c = (char *) & a;
	return (*c);
}
