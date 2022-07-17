#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _memset -> fills the first n bytes of the memory area
 * pointed to by s with the constant byte b
 * @s: pointer to n which is the block to be filled
 * @b: the value to be set
 * @n: number of bytes to be set to the value.
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
