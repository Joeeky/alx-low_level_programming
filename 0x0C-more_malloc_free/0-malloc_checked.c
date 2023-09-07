#include "main.h"

/**
 * malloc_checked - create array
 * @b: size to alloc for malloc
 * character to be store in array
 * Return: pointer to the array
 */
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);
	return (a);
}
