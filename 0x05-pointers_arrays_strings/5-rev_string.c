#include "alx.h"

/**
 * rev_string -> a function that reverses a string
 * followed by a new l;ine.
 * @s: an input string
 * *Return: nothing
 */
void rev_string(char *s)
{
	int len = 0;
	int i = 0;
	char new;

	while (s[len] != '\0')
		len++;

	while (i < len--)
	{
		new = s[i];
		s[i++] = s[len];
		s[len] = new
	}
}
