#include "main.h"

/**
 * _atoi - function that convert a string to an integer.
 * @s:	string to convert.
 *
 * Return: string converted.
*/

int _atoi(char *s)
{
	int				i;
	int				sign;
	unsigned int	nb;

	i = 0;
	sign = 1;
	nb = 0;
	while (s[i] &&(s[i] == ' ' || (s[i] >= 9 && s[i] <= 13)))
		++i;
	if (s[i] == '-')
			sign = -1;
	if (s[i] == '+' || s[i] == '-')
		i++;
	while (s[i] && s[i] >= '0' && s[i] <= '9')
	{
		nb = nb * 10 + (s[i] - '0');
		i++;
	}
	return (sign * (int)nb);
}
