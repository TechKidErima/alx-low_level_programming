#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: void
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int int1, int2, size, i, j;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	int1 = 0;
	while (s1[int1] != '\0')
		int1++;
	int2 = 0;
	while (s2[int2] != '\0')
		int2++;

	size = int1 + int2;

	str = malloc(size * sizeof(char) + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < int1)
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (i <= size)
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	return (str);
}
