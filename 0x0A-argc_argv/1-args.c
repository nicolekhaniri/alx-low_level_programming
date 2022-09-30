#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the name of the program followed by a new line
 * @argv: characters that compose the argument
 * @argc: number of arguments
 * Description: prints out the program name
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
