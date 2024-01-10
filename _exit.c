#include "main.h"


/**
 * _exiit - checks to see if the exit command has been input
 * @str: the command
 *
 * Return: 0 if command is not exit else 1
 */

int _exiit(char *str)
{
	char *a;

	a = strtok(str, " \n\t");
	if (_strcmp("exit", a) == 0)
	{
		free(str);
		return (1);
	}
	free(str);
	return (0);
}
