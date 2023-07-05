#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: The string to be returned
 * Return: The natural square root of a number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	return (1);
	return (n * _sqrt_recursion(n, 0));
}
