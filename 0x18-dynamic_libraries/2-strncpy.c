#include "main.h"
/**
 * _strncpy - Copy a string with n bytes from src
 * @dest: The copy of the src
 * @src: The string to be copied
 * @n: Number of bytes to be append from src
 *
 * Return: dest (as a pointer).
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (*(src + i) != '\0' && i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}

	return (dest);
}
