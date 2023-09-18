#include "main.h"

/**
 * swap_int - pointer
 * @a: pointer values
 */
void swap_int(int *a, int *b)
{
	int nim1 = *a;
	int num2 = *b;

	*a = num2;
	*b = num1;
}
