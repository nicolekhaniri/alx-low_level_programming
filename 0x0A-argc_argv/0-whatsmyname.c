#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the name of the program followed by a new line
 * @argv: program name
 * @argc: index position of the program name
 * Description: prints out the program name
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("%s", argv[0]);
	printf("\n");
	(void)argc;
	return (0);
}
