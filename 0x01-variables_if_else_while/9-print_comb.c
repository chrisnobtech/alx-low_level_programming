#include <stdio.h>

/**
 * main - print a series of numbers with a commas
 *
 * Return: Always (Success);
 */
int main(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);

		if (c != '9')i
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
