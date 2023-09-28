#include "main.h"

/**
 * clear_bit - Zeroes out the bit at the given position
 * @n: A memory address pointing to the bit
 * @n: The location for value modification - indices begin at 0.
 * Return: When encountering an error - -1.
 * Otherwise - 1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
