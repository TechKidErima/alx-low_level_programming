#include "main.h"
#include <stddef.h>

/**
 * _strstr  - locates a string
 * @haystack: string to be examined
 * @needle: searched in hay
 * Return: retrn 0
 */

char *_strstr(char *haystack, char *needle)
{
	int point;

	for (; *haystack; haystack++)
	{
		for (point = 0; needle[point]; point++)
		{
			if (!(*(haystack + point)))
			{
				return (NULL);
			}
			if (*(haystack + point) != needle[point])
				break;
		}
		if (needle[point] == '\0')
			return (haystack);
	}
	return (NULL);
}
