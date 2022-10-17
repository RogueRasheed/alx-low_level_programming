#include <stdio.h>

/**
 * main - print the numbers in base 16
 * Return: Always 0
 */
int main(void)
{
	int no;
	char why;

	for (no = 0; no < 10; no++)
		putchar((no % 10) + '0');

	for (why = 'a'; la <= 'f'; why++)
		putchar(why);

	putchar('\n');

	return (0);
}
