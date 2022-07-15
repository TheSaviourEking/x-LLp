#include "alx.h"

/**
 * reverse_array -> a function that reverses an array.
 * @a: an input array
 * @n: number of elements of array
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int new;

	while (i < n--)
	{
		new = a[i];
		a[i++] = a[n];
		a[n] = new;
	}
}
