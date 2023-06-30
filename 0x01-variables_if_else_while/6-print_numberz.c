#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - A Program That Prints All Single Digit
 * Return: Always (0)
 */
int main(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
	putchar(d);
	putchar('\n');

	return (0);
}
