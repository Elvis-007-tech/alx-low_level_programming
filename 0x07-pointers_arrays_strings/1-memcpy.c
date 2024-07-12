#include "main.h"

/**
 **_memcpy - function copies @n bytes to memory area @dest
 *from memory area @src
 *@src: memory area to copy from
 *@dest: memory area to copy to
 *@n: number of times to copy
 *
 * Return: pointer to the memory area dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{dest[i] = src[i];
	}

	return (dest);
}
