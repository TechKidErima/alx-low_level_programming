#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * char *_memcpy - copies memory area.
 * @dest - destination of copied memeory location
 * @src - source of memeory o\location
 * @n: length of buffer
 * Return: 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;

	while (n-- > 0)
	{
		*ptr = *src;
		dest++;
		src++;
	}

	return (ptr);
}
