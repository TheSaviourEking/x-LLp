#include "main.h"

/**
*_putchar -> print alphabet in lower case
* Return: 0;
*/
void print_alphabet(void)
{
	int i;
	for (i = 'a'; i <= 'z'; i++)
	{
	       	_putchar(i);
	}
	_putchar('\n');
}
