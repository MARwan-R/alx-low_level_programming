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
	int nl = n % 10;
	_putchar(nl + 48);
	return (nl);
}
