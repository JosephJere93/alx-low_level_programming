/*
 * _Puchar
 */

int _putchar(char c)
{
	return write(STDOUT_FILENO, &c, 1);
}
