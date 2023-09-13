#include "main.h"

/**
 * _islower - Test the lowercase
 *
 * @c: Number to pass to _islower function
 *
 * Return: 1 if lower, 0 if else
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
