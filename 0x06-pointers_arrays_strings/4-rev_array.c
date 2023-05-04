#include "main.h"

/**
 * reverse_array -  reverses the content of an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int swap;
	int stat;
	int stop;

	stat = 0;
	stop = n - 1;
	while (stat < stop)
	{
		swap = *(a + stat);
		*(a + stat) = *(a + stop);
		*(a + stop) = swap;
		stat++;
		stop--;
	}
}
