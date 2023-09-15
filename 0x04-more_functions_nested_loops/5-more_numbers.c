#include "main.h"

/**
* more_numbers - Prints from 0 to 14 ten times
*/
void more_numbers(void)
{
	int ch, num, count;

	for (num = 0; num <= 9; num++)
	{
		for (ch = 0; ch <= 14; ch++)
		{
			count = ch;
			if (ch > 9)
			{
				_putchar(1 + 48);
				count = ch % 10;
			}
			_putchar(count + 48);
		}
		_putchar('\n');
	}
}
