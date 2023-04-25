#include "main.h"
#include <unistd.h>
/**
 * _putchar - outputs c to stdout
 * c: what to print
 * Return: 1 on success
 * if error, return -1
 */
int _putchar(int c)
{
	return (write(1, &c,1));
}
