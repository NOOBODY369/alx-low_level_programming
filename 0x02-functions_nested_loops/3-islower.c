#include <main.h>

/**
 * _islower - looking for lowercase
 *
 * Return: 1 for (success)
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
