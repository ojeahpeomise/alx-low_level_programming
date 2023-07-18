#include "main.h"

/**
 * print_line - Draws a straight line acccording to a parameter
 * @n: The number of lines to draw
 * Return: empty
 */

void print_line(int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
	_putchar('_');
	}
	_putchar('\n');
}
