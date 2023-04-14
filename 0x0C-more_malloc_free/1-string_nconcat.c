#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings up to n bytes of s2
 * @s1: first string
 * @s2: second string (up to n bytes will be concatenated)
 * @n: maximum number of bytes to concatenate from s2
 *
 * Return: pointer to concatenated string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int len1 = 0, len2 = 0, i, j;

	if (s1 != NULL)
		len1 = strlen(s1);

	if (s2 != NULL)
		len2 = strnlen(s2, n);

	s = malloc(len1 + len2 + 1);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		s[i] = s1[i];
	for (j = 0; j < len2; j++)
		s[i + j] = s2[j];
	s[i + j] = '\0';

	return (s);
}
