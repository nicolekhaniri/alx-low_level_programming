#include <stdio.h>

/**
 * _isdigit - Check if number is between 0 and 9.
 * Return: 1 if c is between and 0 if not
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
