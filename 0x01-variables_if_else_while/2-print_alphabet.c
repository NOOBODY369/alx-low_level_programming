#include <stdio.h>

/**
 * main - printing alphabet in lowercase.
 *
 * Return: always 0.
*/

int main(void)
{
	char	alpha;

	while  (alpha >= 'a' && alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
