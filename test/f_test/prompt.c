#include "main.h"

/**
 * prompt - writes a prompt
 *
 */

void prompt(void)
{
	if (isatty(STDIN_FILENO))
	{
		_putchar('(');
		_putchar('$');
		_putchar(')');
		_putchar(' ');
	}
	fflush(stdout);
}
