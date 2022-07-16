#include "main.h"

/**
* print_alphabet -> prints the lowercase alphabets followed by new lines
* Return: Nothing
*/

void print_alphabet(void)
{
	char j;

	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
}
