#include "main.h"

/**
 * _isupper - function to check for uppercase letters
 * @c: is the int that will be used for the argument in the function
 * Returns - 1 if is uppercase and 0 - if not
 */

int _isupper(int c)
{
	if(c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return(0);
}
