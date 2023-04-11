#include "main.h"
#include <stdlib.h>

/**
 * 0-create_array - create_array(unsigned int size, char c)
 * @size: size of array
 * @c: assigned char
 * Description: create array of size size and assign char c
 * Return: point array, NULL if not success
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if(size == 0 || str == NULL)
		return(NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
