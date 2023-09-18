#include "main.h"

/**
 * swap_int - pointer
 * @a: pointer values
 */
void swap_int(int *a, int *b)
{
	int a = *a;
	int b = *b;

	*a = b;
	*b = a;
}
