#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of args
 * @argc: argument count
 * @argv: argument vecttor
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
