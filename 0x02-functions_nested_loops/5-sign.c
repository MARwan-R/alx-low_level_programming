#include "main.h"

/**
 * print_sign - prints + or -
 *
 * @n: int input
 *
 * Return: 1 if +, 0 if 0, -1 if -
 */

int print_sign(int n);
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		_putchar('0');
	}
	else
	{
		return (-1);
		_putchar('-');
	}

}
