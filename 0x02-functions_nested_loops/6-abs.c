#include "main.h"

/**
 * _abs -> returns absolute value of a number
 * @r: An integer input
 * Return: Absolute value of number r
 */
int _abs(int r)
{
	if (r >= 0)
		return (r);
	else
		return (r * -1);
}
