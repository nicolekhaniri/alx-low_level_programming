#include <stdio.h>

/**
 * more_numbers - print 0 to 14 a total of 10 times.
 * @n: The numbers.
 */
void more_numbers(void)
{
	int n, line;
	for (line = 1; line < 11; line++)
	{
		for (n = 0; n < 15; n++)
		{
		printf("%d", n);
		}
		printf("\n");
	}
}
