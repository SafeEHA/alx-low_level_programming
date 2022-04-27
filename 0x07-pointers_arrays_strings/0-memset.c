#include "main.h"

/**
 * _memset -  function that fills memory with a constant byte.
 * @s: buffer pointer that has the address of the memory to fill
 * @b: constant byte that will be written into the momory
 * @n: amount of times the byte will be written into the memory
 * Return: s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
