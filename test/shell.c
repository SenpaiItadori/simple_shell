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
	}
}
