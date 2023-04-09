#include "main.h"

/**
 * get_endianness - function that checks endianness
 * @void: void
 * Return: if big endian 0 or 1 if little endian
 */
int get_endianness(void)
{
	unsigned int y = 1;
	char *c = (char *) &y;

	return ((int) *c);
}
