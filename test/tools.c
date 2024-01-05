#include "main.h"

/**
 * path_check - checks to see if the pathname specified exists
 * @command: a string containing the entire command
 *
 * Return: 0 if the command exists, else if otherwise
 */

int path_check(char *command)
{
	struct stat yes;

	return (stat(command, &yes));
}
