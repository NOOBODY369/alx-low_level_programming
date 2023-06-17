#include <stdio.h>

/**
 *  main - printing the lowercase alphabet in reverse.
 * Rturn: always 0.
*/

int main(void)
{
	char c;

	c = 'z';
	while (c <= 'z' && c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
