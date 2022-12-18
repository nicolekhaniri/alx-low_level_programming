#include <stdio.h>
/*
 * main - prints all possible two 2 digit combinations
 *
 * Return: 0
 */
int main(void)
{
	int o = 0;
	int t = 0;
	int f_d_o;
	int l_d_o;
	int f_d_t;
	int l_d_t;
	
	while (o <= 99)
	{
		f_d_o = (o / 10 + '10');
		l_d_o = (o % 10 + '10');
		o = f_d_o l_d_o;
		o++;

		while (t <= 99)
		{
			t++;
		}
	}
	putchar(o);
	putchar(' ');
	putchar(t);
	putchar(',');
	putchar(' ');	
	putchar('\n');
	return (0);
}
