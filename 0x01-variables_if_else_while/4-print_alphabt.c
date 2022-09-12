#include <stdio.h>
/**
 * main - write a program that prints the alphabel in lowercase followed by a new line
 * 
 * Description - use main function
 * print all the letters except q and e
 * Return: 0
 */
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
if (ch != 'e' && ch != 'q')
{
	putchar(ch);
}
}
putchar('\n');
return (0);
}
