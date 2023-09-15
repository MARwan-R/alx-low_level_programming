#include "main.h"

/**
 * print_most_numbers - prints
 */

void print_most_numbers(void)
{
	int num = 0;

	while (num <= 9)
	{
		if (num == 2 || num == 4)
			num++;

		_putchar(num);
		num++;
	}
	_putchar('\n');
}
