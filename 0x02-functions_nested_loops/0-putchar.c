#include "main.h"

/**
 * put_char - printing _putchar.
 * parameterstr: where we store '_putchar'
 *
 * Return: always 0.
*/

void	put_char(char *str)
{
	int	i;

	str = "_putchar";
	i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

/**
 * main - main of put_char.
 * Return: always 0.
*/

int main(void)
{
	char	*str;

	str = 0;
	put_char(str);

	return (0);

}
