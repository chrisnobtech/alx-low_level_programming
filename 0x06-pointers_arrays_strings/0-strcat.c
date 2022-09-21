#include "main.h"

/**
 * _strcat - Add source to the destination string
 * @dest: string to add by source
 * @src: string to add to destination
 *
 * Return: A pointer to the string destination
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;
	while (*(dest + i))
		i++;
	while ((*(dest + i) = *(src + j)))
	{
		i++;
		j++;
	}
	return (dest);
}
