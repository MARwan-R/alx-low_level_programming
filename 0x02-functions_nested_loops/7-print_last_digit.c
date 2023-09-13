#include "main.h"

/**
 * print_last_digit - prints last digit
 *
 * @n: input
 *
 * Return: output
 */
int print_last_digit(int n)
{
	int np, nl;
	
	nl = n % 10;
	np = _abs(nl);

	_putchar('0' + np);
	return (np);
}
