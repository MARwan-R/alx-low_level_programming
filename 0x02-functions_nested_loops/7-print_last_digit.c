#include "main.h"

/**
 * _abs - absolute value
 *
 * print_last_digit - prints last digit
 *
 * @n: input
 *
 * Return: output
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n == 0)
	{
		return (n);
	}
	else
	{
		n = n + (n * -2);
		return (n);
	}
}

int print_last_digit(int n)
{
	int np, nl;

	nl = n % 10;
	np = _abs(nl);

	_putchar('0' + np);
	return (np);
}
