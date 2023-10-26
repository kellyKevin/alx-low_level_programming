#include "main.h"
#include <stdio.h>

/**
 * binary_to_unit - binary can be converted through unsigned int
 * @b: a string that takes binary number or numbers
 * Return: number that are converted
 */

unsigned int binary_to_unit(const char *b)
{
	int alx;
	unsigned int kelly = 0;

	if (!b)
		return (0);
	for (alx = 0; b[alx]; alx++)
	{
		if (b[alx] < '0' || b[alx] > '1')
			return (0);
		kelly = 2 * kelly + (b[alx] - '0');
	}
	return (kelly);
}

