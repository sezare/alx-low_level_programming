#include <stdlib.h>
#include <string.h>

/**
 * _strdup - duplicate a string to a new memory space location
 * @str: pointer to the string to duplicate
 * Return: pointer to the newly allocated duplicate string
 */
char *_strdup(char *str)
{
	char *dup;
	int i, len = 0;
	/** Check for a NULL input string*/
	if (str == NULL)
		return (NULL);

	/**Compute the length of the input string*/
	while (str[len] != '\0')
		len++;

	/** Allocate memory for the duplicate string*/
	dup = malloc((len + 1) * sizeof(char));
	if (dup == NULL)

		return (NULL);

	/**Copy the input string to the duplicate string*/
	for (i = 0; i < len; i++)
		dup[i] = str[i];
	dup[len] = '\0'; /**add null terminator to end of duplicate string*/


	/**Return a pointer to the duplicate string*/
	return (dup);
}
