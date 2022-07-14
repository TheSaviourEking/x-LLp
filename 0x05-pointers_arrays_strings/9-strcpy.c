/**
 * _strcpy -> a function that copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buff pointed to by dest.
 * ------------------------------------------------------------
 *  @dest: A pointer to destinatiom of string
 *  @src: A pointer to source string to copy from
 *  -----------------------------------------------------------
 *  Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *new = dest;

	while (*src)
		*desr++ = *src++;
	return (new);
}
