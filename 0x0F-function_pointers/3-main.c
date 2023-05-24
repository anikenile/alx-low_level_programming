#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - main function
 * @argc: The number of arguments
 * @argv: An array of pointers
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int fig1;
	int fig2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	fig1 = atoi(argv[1]);
	op = argv[2];
	fig2 = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && fig2 == 0) ||
	    (*op == '%' && fig2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(fig1, fig2));

	return (0);
}
