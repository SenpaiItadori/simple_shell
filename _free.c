#include "main.h"

/**
 * _free - frees 3 memory adresses
 * @array: an array to be freed
 * @s1: one string to be freed
 * @s2: another string to be freed
 *
 */

void _free(char **array, char *s1, char *s2)
{
	free_array(array);
	free(s1);
	free(s2);
}
