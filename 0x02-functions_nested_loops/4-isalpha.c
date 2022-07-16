#include "main.h"

/**
 * _isalpha -> return 1 if character is a letter - lowercase or uppercase.
 * @c: An input character
 * Return: 1 or 0 otherwise
 */
int _isalpha(int c)
{
	char lower, upper;
	int isletter = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (c == lower || c == upper)
				isletter = 1
		}
	}
	return (isletter);
}
