#include "main.h"
#include <stdio.h>
/**
 * set_string - sets the value of a pointer to a char
 * @s: value to be replaced to char
 * @to: value to replace value of pointer s
 */

void set_string(char **s, char *to)
{
	*s = to;
}
