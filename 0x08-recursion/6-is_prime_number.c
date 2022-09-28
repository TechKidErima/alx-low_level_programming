#include "main.h"
/**
 * is_divisible - Checks if a number is divisible
 * @num: The number to be checked
 * @div: The divisor
 *
 * Return: 0
 */
int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);
	if (div == num / 2)
		return (1);

	return (is_divisible(num, div + 1));
}
