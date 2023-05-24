#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter
 * @array: array
 * @size: number of elements to print
 * @action: pointer
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array == NULL || action == NULL)
		return;

	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}
