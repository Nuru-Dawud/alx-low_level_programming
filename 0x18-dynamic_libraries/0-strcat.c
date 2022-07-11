#include "main.h"

/**
 * _strcat - Concatenate a string to another string
 * @dest: Destination string
 * @src: Source string
 *
 * Return: Destination string as a pointer
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;

	while (*(dest + i))
		i++;
	while (*(src))
	{
		*(dest + i) = *(src);
		i++;
		src++;
	}

	return (dest);
}
