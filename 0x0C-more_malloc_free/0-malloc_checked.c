#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - memory allocation with malloc function
 * @b: size of memory to be allocated in bytes
 * Return: Pointer to the memory allocated 
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
