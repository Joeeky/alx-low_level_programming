#include "main.h"

/**
 * _strlen - copies string to allocated memory
 * @s: string to newly memory
 *
 * Return: to new memory
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
