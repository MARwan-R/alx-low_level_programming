#include "main.h"

/**
 * main - Entry point
 *
 * Description: print_alphabet - Prints the alphabet in lowercase followed by a new line.
 *
 * Return: Always 0 (Success)
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
