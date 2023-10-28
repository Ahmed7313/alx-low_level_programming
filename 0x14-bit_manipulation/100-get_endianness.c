#include "main.h"

/**
 * get_endianness - checks the endianness of the system
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	union
	{
		unsigned int i;
		char c[4];
	} u;

	u.i = 1;

	return (u.c[0]);
}
