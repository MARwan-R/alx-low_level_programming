#include "main.h"

/**
 * _isalpha - Test the char if alphabet
 *
 * @c: Number to pass to _islower function
 *
 * Return: 1 if char, 0 if else
*/

int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 89))
		return (1);
	else
		return (0);
}
