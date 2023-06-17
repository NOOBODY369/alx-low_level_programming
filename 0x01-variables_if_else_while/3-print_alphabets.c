#include <stdio.h>

/**
 *  main - printing alphabet in lowercase first
 *         uppercase 2nd.
 * Return:
*/

int main(void)
{
	char 	alpha;
	char	ALPHA;

	alpha = 'a';
	ALPHA = 'A';
	while (alpha >= 'a' && alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	while (ALPHA >= 'A' && ALPHA <= 'Z')
	{
		putchar(ALPHA);
		ALPHA++;
	}
	putchar('\n');
	return (0);
}
