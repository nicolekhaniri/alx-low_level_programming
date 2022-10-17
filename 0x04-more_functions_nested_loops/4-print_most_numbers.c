#include <stdio.h>

/**
 * print_numbers - print 0 to 9 but not 2 and 4.
 * @n: The numbers.
 */
void print_most_numbers(void)
{
	int n;
	for (n = 0; n < 10; n++)
	{
		if (n != 2 && n != 4)
		{
			printf("%d", n);
		}
	}
	printf("\n");
}
