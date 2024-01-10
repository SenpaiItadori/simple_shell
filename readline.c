#include "main.h"

/**
 * readline - reads user input from stdin
 *
 * Return: the data entered in by the user or NULL if failed
 */

char *readline(void)
{
	char *read = NULL;
	size_t n = 0;

	if (getline(&read, &n, stdin) == -1)
	{
		free(read);
		return (NULL);
	}
	return (read);
}
