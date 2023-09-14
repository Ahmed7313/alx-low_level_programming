#include "main.h"

/**
 *  _integer - check for an upper case char
 *  @c: The character to check
 *
 *  Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
