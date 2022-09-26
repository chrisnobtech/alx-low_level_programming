#include "main.h"

/**
 * _memset - fill memory with a constant byte
 * @s: memory area to be fill
 * @b: constant byte to be fill
 * @n: bytes of memory area to be fill
 *
 * Return: the memory area filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}
