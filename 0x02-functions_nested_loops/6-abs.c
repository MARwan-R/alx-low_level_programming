#include "main.h"

/**
 * _abs - gets num
 *
 * @n: the num
 *
 */
int _abs(int n)
{
	if (n < 0)
		n  = n +(-n*2);
	return (n);
}
