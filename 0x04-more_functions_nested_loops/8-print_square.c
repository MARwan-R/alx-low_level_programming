#include "main.h"

/**
 * print_square - print a square by #
 */

void print_square(int size)
{
	int x, y;

	for (x = 0; x <= size; x++)
	{
		for (y = 0; y <= size; y++)
		{
			_putchar('#');
		}
		_putcahr('\n');
	}
}
