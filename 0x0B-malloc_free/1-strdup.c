#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: pointer to newly allocated memory
 *
 * Return: void
 */
char *_strdup(char *str)
{
	char *st;
	unsigned int len, i;

	if (str == 0)
		return (NULL);

	len = 0;
	while (str[len] != '\0')
		len++;
	st = malloc(sizeof(char) * (len + 1));
	if (st == 0)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		st[i] = str[i];
	}

	st[len] = '\0';

	return (st);
}
