#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * calloc - function that allocates memory for an array, using malloc
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: number
 * @size: size of
 * Return: NULL if failed.
 */
int void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int a;
	void *tmp;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	p = malloc(nmemb * size);
	tmp = p;
	if (p == 0)
	{
		return (NULL);
	}
	for (a = 0; a < (nmemb * size); a++)
		p[a] = 0;
	return (tmp);
}
