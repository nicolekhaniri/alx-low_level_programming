#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints minimum change
 * @args: length of the arguments in total
 * @argv: the arguments themselves
 *
 * Return: 1 n Error if argument passed is not exactly 1 and 0 if negative arg
 *
 */

int main(int args, char *argv[])
{
	int i, change;

	change = 0;
	i = atoi(argv[1]);

	if (change < 0)
	{
		printf("0\n");
		return (0);
	}
	if (args != 2)
	{
		printf("Error\n");
		return (1);
	}
	for (; i >= 0;)
	{
		if (i >= 25)
			i = i - 25;
		else if (i >= 10)
			i = i - 10;
		else if (i >= 5)
			i = i - 5;
		else if (i >= 2)
			i = i - 2;
		else if (i >= 1)
			i = i - 1;
		else
			break;
		change += 1;
	}
	printf("%d\n", change);
	return (0);
}
