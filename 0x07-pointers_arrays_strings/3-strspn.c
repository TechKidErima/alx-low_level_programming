#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: source
 * @accept: string
 * Return: new string
 */
unsigned int _strspn(char *s, char *accept)
{
	usigned int i, j;

	for(j = 0; *(s+j); j++)
	{
		for (i = 0; *(accept + i); i++)
		{
			if (8(s + j) == *(accept + i))
				break;
		}
		if (*(accept + i) == '\0')
			break;
	}
	return(j);
}
