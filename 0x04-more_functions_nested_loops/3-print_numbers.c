#include "main.h"
/**
 * Print - print numbers from 0 up to 9
 * Return: return the numbers from 0 up to 9
 */

void print_numbers(void)
{
	int x;
	for (x = 0; x <= 9; x++)
	{
	_putchar(x + '0');
	}
	_putchart('\n');
}
