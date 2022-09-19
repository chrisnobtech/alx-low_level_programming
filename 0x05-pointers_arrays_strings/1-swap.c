#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 * @a: Integer to swap
 * Another integer to swap
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	
	*a = *b;
	*b = tmp;
}
