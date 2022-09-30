#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - the number of arguments passed into it.
 *
 * @argc: number of args
 * @argv: strng of array of args
 *
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d", argc-1);

	return (0);
}
