#include "main.h"

/**
 * _atoi - function that convert a string to an integer.
 * @s:	string to convert.
 *
 * Return: string converted.
*/

int _atoi(char *s)
{
	int				res;
	int				sign;

	sign = 1;
	res = 0;
	while (*s &&(*s == ' ' || (*s >= 9 && *s <= 13)))
		++s;
	if (*s == '-')
			sign = -1;
	if (*s == '+' || *s == '-')
		++s;
	while (*s && *s >= '0' && *s <= '9')
	{
		res = res * 10 + (*s - '0');
		++s;
	}
	return (sign * res);
}
