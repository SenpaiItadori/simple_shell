#include "main.h"

/**
 * print_env - prints the current environment to stdout
 * @str: the command
 *
 */

void print_env(char *str)
{
	int i;

	for (i = 0; environ[i]; i++)
	{
		write(STDOUT_FILENO, environ[i], _strlen(environ[i]));
		_putchar('\n');
	}
	free(str);
}
