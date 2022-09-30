#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the name of the program followed by a new line
 * @argc: position of the program name
 * @argv: program name
 * Description: prints out the program name
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("program's name is: %s\n", argv[0]);
	printf("Program position in argc is: %d\n", argc);
	return (0);
}
