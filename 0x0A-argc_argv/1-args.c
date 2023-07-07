#include "main.h"

/**
 * main - program that prints the number of arguments passed into it.
 * @argv: argument values.
 * @argc: number of argument.
 *
 * Return: Always 0.
*/

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
