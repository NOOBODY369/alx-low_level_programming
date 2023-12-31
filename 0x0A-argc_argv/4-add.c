#include "main.h"

/**
 * _atoi - function that convert a string to an integer.
 * @s:	string to convert.
 *
 * Return: string converted.
*/

int	_atoi(char *s)
{
	int	i,	d,	n,	len,	f,	digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
	len++;

	while (i < len && f == 0)
	{
	if (s[i] == '-')
	++d;

	if (s[i] >= '0' && s[i] <= '9')
	{
	digit = s[i] - '0';
	if (d % 2)
	digit = -digit;
	n = n * 10 + digit;
	f = 1;
	if (s[i + 1] < '0' || s[i + 1] > '9')
	break;
	f = 0;
	}
	i++;
	}

	if (f == 0)
	return (0);

	return (n);
}

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
		sum += _atoi(argv[num]);
	}
	printf("%d\n", sum);
	return (0);
}
