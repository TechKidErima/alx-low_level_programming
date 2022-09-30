#include "main.h"

/**
 * _memset -  fills memory with a constant byte.
 * @s: source
 * @b: constat byte
 * @n: length of buffer
 * Return: string
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n-- > 0)
		*ptr++ = b;

	return (s);
}
