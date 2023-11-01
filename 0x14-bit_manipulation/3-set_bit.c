#include "main.h"

/**
 * set_bit - prog sets the value of a bit to 1
 * at a given index
 * @n: number to set
 * @index: index at which to set bit
 *
 * Return: 1 if succes, or -1 if an error
 * occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}