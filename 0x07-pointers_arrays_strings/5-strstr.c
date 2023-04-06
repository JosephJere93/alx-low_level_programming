#include <stdio.h>
#include "main.h"

/**
 * _strstr - Main entry
 * @haystack: input
 * @needle: input
 * Return: 0 Always (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *one = haystack;
		char *two = needle;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}

		if (*two == '\0')
			return (haystack);
	}

	return (NULL);
}