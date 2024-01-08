#include "main.h"

/**
 * _putchar - prints/writes a single character to stdout
 * @c: the char to be written to stfout
 *
 * Return: the number of chars written which is 1 or -1 on failure
 */

int _putchar(char c)
{
	return (write(STDOUT_FILENO, &c, 1));
}
