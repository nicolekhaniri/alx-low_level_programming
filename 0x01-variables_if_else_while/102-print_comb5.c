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
	int f_d_t;
	
	while (o <= 99 && t <= 99)
	{
		f_d_o = (o / 10 + '0');
		l_d_o = (o % 10 + '0');
		f_d_t = (t / 10 + '0');
		l_d_t = (t % 10 + '0');


		if (f_d_o < l_d_o && f_d_t < l_d_t)
		{
			putchar(f_d_o);
			putchar(l_d_o);
			putchar(" ");
			putchar(f_d_t);
			putchar(l_d_t);
			putchar(", ");

			if (o == 98 && t == 99)
			{
				putchar("")
			}

		}
	o++;
	t++;
	}
putchar("\n");
return(0);
}
