#include "main.h"
#include <unistd.h>

/*
 * _putchar - points c to stdout
 * @c: To be printed
 * Return: On Success 1.
 * On error -1 
 */

int _putchar(char c)
{
	return(write(1, &c,1));
}
