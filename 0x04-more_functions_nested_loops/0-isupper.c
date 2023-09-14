#include "main.h"

/**
 * _isupper - Test the char if alphabet
 *
 * @c: Number to pass to _isupper function
 *
 * Return: 1 if char, 0 if else
*/

int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
