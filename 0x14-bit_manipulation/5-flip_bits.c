#include "main.h"

/**
 * flip_bits - Calculates the number of bit flips required to
 * transform one number into another.
 * @n: The number.
 * @m: The desired state for n.
 *
 * Return: The bit modification count needed to go from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}
