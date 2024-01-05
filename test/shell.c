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
	char *buff, *arr;
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
		arr = _arg_sort(buff);
		arr[0] = path_finder(arr[0]);
		if (path_check(arr[0] == 0))
		{
			/*fork and exercute command*/
			run_command(arr);
		}
		/*free the memory*/
	}
}
