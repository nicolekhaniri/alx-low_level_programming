#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints multiples of two numbers
 * @argc: length of the arguments in total
 * @argv: the arguments themselves
 *
 * Return: 1 if the arguments exceed 3 and 0 if success
 *
 */

int main(int argc, char *argv[])
{
	int i, mult;

	mult = 1;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		mult = mult * atoi(argv[i]);
	}
	printf("%d\n", mult);
	return (0);
}
