#include "main.h"

/**
 * print_diagonal - prints _
 * @n: num of _
 */
void print_diagonal(int n)
{
	int i, x;

	for (i = 1; i <= n; i++)
	{
		for (x = 1; x <= n; x++)
			_putchar(' ');
		_putchar('/');
		_putchar('\n');
	}
}
