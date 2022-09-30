#include <stdlib.h>
#include <stdio.h>

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
