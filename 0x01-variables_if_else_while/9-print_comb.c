#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (int num = 0; num < 10; num++)
	{
		if (num < 9)
		{
			putchar('0' + num);
			putchar(',');
			putchar(' ');
		} else
		{
			putchar('0' + num);
			putchar('$');
		}
	}
	putchar('\n');
	return (0);
}
