#include <main.h>

/**
 * _isalpha - looking for upper and lowercase
 *
 * Return 1 for (success).
*/

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
