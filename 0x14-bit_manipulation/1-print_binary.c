#include "main.h"

/**
 * print_binary - Outputs the binary form of a numeric value
 * @n: The value to be displayed in binary form
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
