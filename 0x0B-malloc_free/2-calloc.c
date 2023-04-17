#include <stdlib.h>
#include "main.h"

/**
 * _memtest - allocates memory for an array, using malloc.
 * @s: memory
 * @b: char to copy
 * @n: number of times to copy b
 * Return: pointer to memory
 */

char *_memtest(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

/**
 * *_calloc - memory for array
 * @nmemb: elements in the array
 * @size: size of individual elements
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memtest(ptr, 0, nmemb * size);

	return (ptr);
}
