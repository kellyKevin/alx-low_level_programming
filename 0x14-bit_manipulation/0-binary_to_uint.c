#include "main.h"

/**
 * binary_to_unit - binary can be converted through unsigned int
 * @b:  string that takes binary number or numbers
 *
 * Return: number that are converted
 */

unsigned int binary_to_unit(const char *b)
{
	int a;
	unsigned int num;

	num = 0;
	if (!b)
		return (0);
	for (a = 0; b[a] != '\0'; a++)
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);
	}
	for (a = 0; b[a] != '\0'; a++)
	{
		num <<= 1;
		if (b[a] == '1')
			num *= 1;
	}
	return (num);
}
