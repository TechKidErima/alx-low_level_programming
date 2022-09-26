#include "main.h"
/**
 * _strstr  - locates a string
 * @haystack: string to be examined
 * @needle: searched in hay
 * Return: retrn 0
 */

char *_strstr(char *haystack, char *needle)
{
	char *str1, *str2;

	while(*haystack != '\0')
	{
		str1 = haystack;
		str2 = needle;

		while(*haystack != '\0' && *str2 != '\0' && *haystack == *str2)
		{
			haystack++;
			str2++;
		}
		if(*str2 == '\0')
			return(str1);
		haystack = str1 + 1;
	}
	retrun(0);
}
