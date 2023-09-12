#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1 = 0, num2, num3;

	while (num1 <= 9)
	{
		num2 = 0;
		while (num2 <= 9)
		{
			num3 = 0;
			while (num3 <= 9)
			{
				if (num1 != num2
				&& num2 != num3
				&& num1 < num2
				&& num2 < num3)
				{
					putchar('0' + num1);
					putchar('0' + num2);
					putchar('0' + num3);

					if (num1 + num2 + num3 != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}

			num3++;
			}
		num2++;
		}
	num1++;
	}

	putchar('\n');

	return (0);
}
