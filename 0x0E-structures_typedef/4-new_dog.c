#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - function that creates a new dog.
 * @s: evaluation
 *Return: length of the string
 */

int _strlen(char *s)
{
	int i;
	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
char *_strcpy(char *dest, char *src)
{
	int len, i;
	len = 0;

	while (src[len] != '\0')
	{
	len++;
	}

	for (i = 0; i < len; i++)
	{
	dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);
	
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	return (NULL);

	dog->name = malloc(sizeof(char) * (len1 +1));
	if (dog->owner == NULL)
	{free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
