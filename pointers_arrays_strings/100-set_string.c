#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: Pointer to the pointer to be modified.
 * @to: Pointer to copy the value from.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
