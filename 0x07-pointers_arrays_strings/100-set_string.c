#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char
 * @s: The pointer to a pointer that needs to be set
 * @to: The pointer to a char that will set the value of 's'
 */
void set_string(char **s, char *to)
{
	*s = to;
}
