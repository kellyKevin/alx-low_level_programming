#include "main.h"

/**
 * _puts_recursion - prints a string followed by a line
 * @s:  the string printed
 * Return: Nothing
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
