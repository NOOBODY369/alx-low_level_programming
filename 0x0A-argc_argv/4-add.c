#include "main.h"

/**
 * main - program that adds positive numbers.
 * @argv: argument values.
 * @argc: number of argument.
 *
 * Return: Always 0.
*/

int main(int argc, char *argv[])
{
	int	num;
	int	sum;
	int	i;

	sum = 0;
	for (num = 1; num < argc; num++)
	{
		for (i = 0; argv[num][i]; i++)
		{
			if (argv[num][i] < '0' || argv[num][i] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[num]);
	}
	printf("%d\n", sum);
	return (0);
}
