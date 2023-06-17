#include <stdio.h>

/**
 *  main - printing lowercase alphabet except
 * 		'q' and 'e'
 * Return: always 0.
*/

int main()
{
	char	alpha;

	alpha = 'a';
	while (alpha >= 'a' && alpha <= 'z')
	{
		if (alpha != 'q' && alpha != 'e')
		{
			putchar(alpha);
			alpha++;
		}
	}
	putchar('\n');
	return(0);
}
