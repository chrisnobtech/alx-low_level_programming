#include "main.h"

/**
 * reverse_array - This reverses the contents of an array of int
 * @a: An array of integers to be reversed
 * @n: Number of elements of the array
 *
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int i = 0, t;

	n = n - 1;
	while (i < n)
	{
		t = *(a + i);
		*(a + i) = *(a + n);
		*(a + n) = t;
		i++;
		n--;
	}
}
