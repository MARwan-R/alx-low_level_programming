#include "main.h"

/**
 * swap_int - pointer
 * @a: pointer values
 * @b: pointer value
 */
void swap_int(int *a, int *b)
{
	int num1 = *a;
	int num2 = *b;

	*a = num2;
	*b = num1;
}
