#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{

	char *c;

	c = argv[0];

	while (*c != '\0')
	{
		_putchar(*c + 0);
		c++;
	}
	_putchar('\n');
	return (0);
}
