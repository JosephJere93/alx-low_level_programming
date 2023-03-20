#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	const char alp[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < sizeof(alp); i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
