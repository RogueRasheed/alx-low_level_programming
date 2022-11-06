#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - a function that searches for string in any set of byters
 * @s: an input string
 * @accept: an input character with to locate into string s
 * Return: a pointer the byte in s that matches one of the byte in accept,
 * or NULL if no such byte is found
 */
char*_strpbrk(char *s, char *accept)
{
	char *start = accept;

	while(*s)
	{
		while(*accept)
		{
			if (*accept == *s)
				return (s);
			accept++;
		}

	accept = start;
	s++;
	}
	return (NULL);
}

