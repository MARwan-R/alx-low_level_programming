#include "main.h"

/**
 * _isdigit - Test the char if alphabet
 *
 * @c: Number to pass to _isdigit function
 *
 * Return: 1 if num, 0 if else
*/
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
