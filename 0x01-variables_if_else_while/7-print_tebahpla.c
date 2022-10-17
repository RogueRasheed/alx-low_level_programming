#include <stdio.h>

/**
 * main - print the letters in reverse
 * Return: Always 0
 */
int main(void)
{
	char why;

	for (why = 'z'; why >= 'a'; why--)
		putchar(why);

	putchar('\n');

	return (0);
}
