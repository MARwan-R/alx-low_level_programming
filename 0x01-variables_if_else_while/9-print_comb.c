#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		if (num < 9)
		{
			putchar('0' + num);
			putchar(',');
			putchar(' ');
			num++;
		} else
		{
			putchar('0' + num);
			putchar('$');
			num++;
		}
	}
	putchar('\n');
	return (0);
}
