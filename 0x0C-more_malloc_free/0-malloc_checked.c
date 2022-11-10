#include "main.h"

/**
 * malloc_checked - using malloc to allocate memory of value of 98
 *
 * @b: allocated memory
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);

}
