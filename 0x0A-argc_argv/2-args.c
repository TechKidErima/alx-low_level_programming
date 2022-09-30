#include <stdio.h>
#include <main.h>
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
	int count = 0;

	if (argc > 0)
	{
		while (count < argc)
		{
			printf("%s\n", argv[count]);
		}
	}
	
	return (0);
}
