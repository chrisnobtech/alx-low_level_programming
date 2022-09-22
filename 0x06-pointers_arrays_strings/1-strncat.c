#include "main"

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

	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);

}
