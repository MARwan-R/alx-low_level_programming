#include <stdio.h>
#include <stdlab.h>
#include <time.h>
/**
 * main - functio
 *
 * Return: 0 succes
 */
int main(void)
{
	int sum;
	char c;

	srand(time(NULL));
	while (sum <= 2645)
	{
		c = rand() % 128;
		sum += c;
		putchar(c);
	}
	putchar (2772 - sum);
	return (0);
}