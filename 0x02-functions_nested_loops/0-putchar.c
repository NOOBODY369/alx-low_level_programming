#include "main.h"

/**
 * put_char - printing _putchar.
 *
 * Return: str.
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
 *
 * Return: always 0.
*/

int main(void)
{
	char	*c;

	c = 0;
	put_char(c);

	return (0);

}
