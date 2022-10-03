#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: character
 *
 * Return: void
 */
char *create_array(unsigned int size, char c)
{
	unsigned int size;
	char *array;

	if (array == 0)
		return (NULL);
	array = malloc(size * sizeof(char));

	if (array == NULL)
		return(NULL);
	int i;

	for (i = 0; i < size; i++)
		array[i] = c;

	return(array);
}

