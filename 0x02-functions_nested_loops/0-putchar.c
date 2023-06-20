#include "main.h"

/**
 * main - printing _putchar.
 *
 * Return: always 0.
*/

void	put_char(char *str)
{
	int	i;

	str = "_putchar";
	i = 0;
	while (i)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

int main(void)
{
	char	*c;

	c = 0;
	put_char(c);
	return (0);

}
