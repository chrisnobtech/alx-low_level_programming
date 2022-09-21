#include "main"

/**
 * _strncat - add src to the dest string
 * @dest: string to add by src
 * @src: string to add to dest
 * maximum to add
 *
 * Return: The link to the dest
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
