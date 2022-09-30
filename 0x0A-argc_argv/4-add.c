#include <stdlib.h>
#include <stdio.h>

/**
 * main - adds positive numbers
 * @argc: length of the arguments in total
 * @argv: the arguments themselves
 *
 * Return: 1 and Error if argument contains symbols and 0 if no number
 *
 */

int main(int argc, char *argv[])
{
	int i, pos;

	pos = 0;

	if (pos < 0)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		pos = pos + atoi(argv[i]);
	}
	printf("%d\n", pos);
	return (0);
}
