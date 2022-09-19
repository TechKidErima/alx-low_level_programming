#include "main.h"

/**
 * reverse string
 * @5 the string to be modfied
 *
 * Return void
 */

void print_rev( *s)
{
	int i = 0;

	while(s[i] != '\0')
		i++;
	for (i = i -1; i>= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
