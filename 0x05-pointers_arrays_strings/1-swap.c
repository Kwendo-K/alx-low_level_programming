#include "holberton.h"
/**
 * a function that swaps the values of two integers
 * @a,b: parameter
 * Description: swap the values of a & b
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
