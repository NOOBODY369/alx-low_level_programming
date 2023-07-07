#include "main.h"

/**
 * main - program that prints all arguments it receives.
 * @argv: argument values.
 * @argc: number of argument.
 *
 * Return: Always 0.
*/

int main(int argc, char *argv[])
{
	int	i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
			i++;
	}
	return (0);
}
