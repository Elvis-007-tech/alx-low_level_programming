#include "main.h"

/**
 **_strchr - function that locates a character in a string
 *@s: the string to be searched
 *@c: the character to be located
 *
 * Return: returns a pointer to the first occurence if c is found
 * if c is not found = NULL
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}
