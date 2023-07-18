#include "main.h"

/**
 * print_square - Function that prints a sqaure followed by a new line
 * @size: size of square
 *
 * Return: empty
 */

void print_square(int size)
{
	int x, y;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (x = 0; x < size; x++)
	{
	for (y = 0; y < size; y++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
	}
}
