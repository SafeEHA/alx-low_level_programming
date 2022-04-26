#include "main.h"

/**
 * _memcpy -  function that copies memory area.
 * @dest: pointer that will receive the copied data
 * @src: pointer that has the information to be copied
 * @n: amount of times the src information willbe copied to dest
 * Return: dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
