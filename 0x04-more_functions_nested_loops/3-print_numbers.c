#include <stdio.h>

/**
 * print_numbers - print 0 to 9.
 * @n: The numbers.
 */
void print_numbers(void)
{
	int n;
	for (n = 0; n < 10; n++)
	{
		printf("%d", n);
	}
	printf("\n");
}
