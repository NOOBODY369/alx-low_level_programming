#include <stdio.h>
#include "main.h"

/**
 * main - fizzbuzz
 *
 * Return: always 0.
*/

int main(void)
{
	int	i = 1;

	while (i <= 100)
	{
		if ((i % 3 == 0 && i % 5 == 0))
			printf("fizzbuzz");
		else if (i % 3 == 0)
			printf("fizz");
		else if (i % 5 == 0)
			printf("buzz");
		else
			printf("%i", i);
		printf(" ");
		i++;
	}
	printf("\n");
	return (0);
}
