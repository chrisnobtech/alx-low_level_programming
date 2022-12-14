#include "main.h"

/**
 * _strncat - add src to the dest string
 * @dest: string to be add by src
 * @src: string be add to dest
 * @n:max nummber of byte copied
 *
 * Return: Link of dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = j = 0;
	while (*(dest + i))
		i++;
	while (j < n && *(src + j))
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	if (j < n)
		*(dest + i) = *(src + j);
	return (dest);
}
