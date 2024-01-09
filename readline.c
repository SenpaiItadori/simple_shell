#include "main.h"

/**
 * readline - reads user input from stdin
 *
 * Return: the data entered in by the user or NULL if failed
 */

char *readline(void)
{
	char *bead = NULL, *read;
	size_t n = 0;

	if (getline(&bead, &n, stdin) == -1)
		return (NULL);
	read = _strdup(bead);
	free(bead);
	return (read);
}
