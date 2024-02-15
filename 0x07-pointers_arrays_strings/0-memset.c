#include "main.h"

/**
 * _memset - Fills a block of memory
 * @s: starting address
 * @b: values
 * @n: no bytes
 * Return: Always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
