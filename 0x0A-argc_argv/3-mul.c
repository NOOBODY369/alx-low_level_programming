#include "main.h"

/**
 * main - program that multiplies two numbers.
 * @argv: argument values.
 * @argc: number of argument.
 *
 * Return: Always 0.
*/

int main(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", i);
	return (0);
}
