#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: returns string length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}
