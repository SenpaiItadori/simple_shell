#include "main.h"

/**
 * main - runs a shell, a unix command line interpreter
 * @argc: the number of command line arguments
 * @argv: an array of command line arguments
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	char *buff;
	while (1)
	{
		prompt();
		buff = readline();
		if (buff == NULL)
		{
			if (isatty(STDIN_FILENO))
				_putchar('\n');
			return (0);
		}
		/*create array for execve*/
		/*pass evironment to array[0]*/
		/*check to see if command exists*/
		/*fork and exercute command*/
		/*free the memory*/
	}
}
