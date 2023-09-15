#include "main.h"

/**
 * print_most_numbers - prints
 */

void print_most_numbers(void)
{
	int num;

	for (num = 0; num <=9;)
	{
		if (num == 2 || num == 4)
			num++;
		else
		{
			_putchar(num);
			num++;
		}
	}
	_putchar('\n');
}
