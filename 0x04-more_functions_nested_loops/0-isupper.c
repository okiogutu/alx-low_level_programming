#include "main.h"

/**
 * _isupper - check if a letter is upper
 * 0x: The number to be checked
 *
 * Return 1 for upper 0 for any else
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
