#include "main.h"
#include <stdio.h>


int _sqrt_recursive(int n, int val);

/**
 * _sqrt_recursion  - returns the natural square root of a
 * number
 * @n: number to calculate the natural square root
 *
 * Return: the natural square root
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_recursive(n, 1));
}

/**
 * _sqrt_recursive - calculates natural square root
 * @n: number to calculate the square root
 * @i: itarate number
 *
 * Return: the natural square root
 */

int _sqrt_recursive(int n, int i)
{
	int sqrt = i * i;

	if  (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (i);
	return (_sqrt_recursive(n, i + 1));
}
