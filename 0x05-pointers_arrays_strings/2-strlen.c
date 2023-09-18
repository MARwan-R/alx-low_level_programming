#include "main.h"

/**
 * _strlen
 *
 * @s: array
 *
 * Return: string length;
 */
int _strlen(char *s)
{
	int lenth = 0;

	while (s < \0)
	{
		lenth++;
		s++;
	}
	return (lenth);
}
