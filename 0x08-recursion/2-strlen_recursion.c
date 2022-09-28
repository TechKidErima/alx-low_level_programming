#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to return lenght
 *
 * Return: 0;
 */
int _strlen_recursion(char *s)
{
	int len = 0;
	
	if(*s)
	{
		len++;
		len += strlen_recursion(s + 1);
	}

	return(len);
}
