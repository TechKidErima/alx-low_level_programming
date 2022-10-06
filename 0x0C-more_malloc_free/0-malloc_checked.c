#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory
 * @b: int to assign
 *
 * Return: void
 *
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);

	return (p);
}
