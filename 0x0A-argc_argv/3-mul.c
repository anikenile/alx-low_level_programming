#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: arrays
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int fig1, fig2;
	int mult;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc == 3)
	{
		fig1 = atoi(argv[1]);
		fig2 = atoi(argv[2]);

		mult = fig1 * fig2;
		printf("%d\n", mult);
	}
	return (0);
}
