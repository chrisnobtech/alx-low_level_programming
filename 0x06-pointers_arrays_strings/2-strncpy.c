#include "main.h"

/**
 * _strncpy - cpoies a string
 * @dest: The destination string
 * @src: The source string
 * @n: The maximum to copy
 *
 * Return: a value
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && *(src + i))
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
