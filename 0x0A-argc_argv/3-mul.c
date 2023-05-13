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

	fig1 = atoi(argv[1]);
	fig2 = atoi(argv[2]);

	if (argc == 2)
	{
		mult = fig1 * fig2;
		printf("%d\n", mult);
	}
	else if (argc < 2 || argc > 2)
	{
		printf("Error");
		return (1);
	}
	return (0);
}
