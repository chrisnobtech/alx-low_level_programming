#include "main.h"

/**
 * string_toupper - This changes all lowercase letters to uppercase
 * @s: The string to be modified
 *
 * Return: pointer of s
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
			*(s + i) -= 'a' - 'A';
		i++;
	}
	return (s);
}
