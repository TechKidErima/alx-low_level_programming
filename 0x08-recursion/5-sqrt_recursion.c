#include "main.h"
/**
 * find_sqrt - Finds the natural square root of an inputted number.
 * @num: The number to find the square root of
 * @root: The root to be tested
 *
 * Return: square root
 */
int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);
	if (root == num / 2)
		return (-1);
	return (find_sqrt(num, root + 1));
}
