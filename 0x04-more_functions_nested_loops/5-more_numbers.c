#include "main.h"

/**
* more_numbers - Prints from 0 to 14 ten times
*/
void more_numbers(void)
{
	int ch, num;

	for (num = 0; num <= 9; num++)
	{
		for (ch = 0; ch <= 14; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
