#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - program that prints its name
 *
 * @argc: number of arguments
 * @argv: return array of argument strings
 *
 * Return: void
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
