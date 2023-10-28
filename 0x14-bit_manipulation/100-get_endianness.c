#include "main.h"

/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	/* Union to help in determining endianness */
	union
	{
		unsigned int i;
		char c[4];
	} u;

	u.i = 1;

	return (u.c[0]);
}
