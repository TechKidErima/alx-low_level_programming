#include "main.h"
/**
 * _strchr -  locates a character in a string.
 * @s: string to search
 * @c: character t search
 * Return: pointer to first occcurence of the 
 */

char *_strchr(char *s, char c)
{
	while (*s != 0)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);

	return (0);
}
