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
	usigned int i = 0;

	while(i<n)
	{
		*(s+i) = b;
		i++;
	}
	return(s);
}
