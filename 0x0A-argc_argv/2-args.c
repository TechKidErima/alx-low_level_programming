#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all arguments passed to it
 *
 * @argc: arguments count
 * @argv: arrays of arguments as strings
 *
 * Return: void;
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		print ("%d", argv[i]);

	return (0);
}
