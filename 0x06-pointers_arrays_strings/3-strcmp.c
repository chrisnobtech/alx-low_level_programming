#include "main.h"

/**
 * _strcmp - This compares two strings
 * @s1: The First string
 * @s2: The Second string
 *
 * Return: value
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*(s1 + i) && *(s2 + i) && (*(s1 + i) == *(s2 + i)))
		i++;
	return (*(s1 + i) - *(s2 + i));
}
