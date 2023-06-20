#include "main.h"

/**
 * put_char - printing _putchar.
 *
 * Return: always 0.
*/

void	put_char(char *c)
{
	int	i;

	c = "_putchar";
	i = 0;
	while (c[i])
	{
		_putchar(c[i]);
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
